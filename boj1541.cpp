//boj1541��_�Ҿ���� ��ȣ_�׸��� �˰���

#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cin >> str;

	string num;
	int result = 0;

	bool minus = false;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+' || str[i] == '-') {
			if (!minus) {
				result += stoi(num);
				num.clear();
			}
			else {
				result -= stoi(num);
				num.clear();
			}
			if (str[i] == '-') {
				minus = true;
			}
		}
		else {
			num += str[i];
		}
	}

	if (!minus) {
		result += stoi(num);
	}
	else {
		result -= stoi(num);
	}

	cout << result;
}
//�׸��� �˰����� �̿��ؼ� Ǯ �� �ִ� ����.
//ó�� -�� ���� �������� �ڿ� ������ ��� ���� ���� �ּҰ��� ���� �̿��ؼ� Ǯ����.