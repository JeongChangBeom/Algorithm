//boj3273��_�� ���� ��_����, �� ������

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	int x;
	cin >> x;

	sort(v.begin(), v.end());

	int result = 0;

	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] + v[j] == x) {
				result++;
			}
			if (v[i] + v[j] > x) {
				break;
			}
		}
	}
	cout << result;
}
//�� �����͸� �̿��� ����. �Է¹��� ���� �����ؼ� �ΰ��� �����ͷ� ������ ��ȸ�ϸ� ������ �����ϴ� �μ��� ���� ������ ã�� �����̴�.