//boj20310��_Ÿ�뽺_���ڿ�

#include<iostream>
#include<vector>

using namespace std;

bool arr[501];

int main() {
	string str;
	cin >> str;

	vector<char> v;

	int count_zero = 0;
	int count_one = 0;

	for (int i = 0; i < str.size(); i++) {
		v.push_back(str[i]);
		if (str[i] == '0') {
			count_zero++;
		}
		else {
			count_one++;
		}
	}

	count_zero /= 2;
	count_one /= 2;


	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] == '0') {
			if (count_zero > 0) {
				arr[i] = true;
				count_zero--;
			}
			else {
				break;
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == '1') {
			if (count_one > 0) {
				arr[i] = true;
				count_one--;
			}
			else {
				break;
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (!arr[i]) {
			cout << v[i];
		}
	}
}
//���ڿ��� �̿��� �������� ó���� vector�� �Է°��� �����ϰ� 0�� �ڿ��� 1�� �տ��� ���� ������ �����ϸ� �ǰڴٰ� �����ؼ�
//vector�� erase�Լ��� ����� Ǯ�����ϴ� 25���� �޾Ҵ�. vector�� erase �Լ��� vector�� ���Ҹ� �����ϸ鼭 size�� �پ��µ� �� ���� �����߱� �����̴�.