//boj8958��_OX����_����,���ڿ�

#include <iostream>
using namespace std;

int main() {
	int x;
	string s;
	cin >> x;

	for (int i = 0; i < x; i++) {
		cin >> s;
		int sum = 0;
		int count = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') {
				count += 1;
			}
			else {
				count = 0;
			}
			sum += count;
		}
		cout << sum << endl;
	}
}
//������ ���ڿ� ����. 0�� �������� ������ count�� ������ ������Ű�鼭 ������ �����ִ� ������ �ذ��ߴ�.