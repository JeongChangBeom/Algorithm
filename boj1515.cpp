//boj1515�� �� �̾� ����_���ڿ�

#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cin >> str;

	int pointer = 0;

	for (int N = 1; N < 30000; N++) {
		string num = to_string(N);
		for (int j = 0; j < num.size(); j++) {
			if (str[pointer] == num[j]) {
				pointer++;
			}
			if (str.size() == pointer) {
				cout << N;
				return 0;
			}
		}
	}
}
//���ڿ�����.
//ó�� ������ ������ �Է°��� ���̰� �ִ� 3000�ڸ� �� ���� ���� ���ڿ��� Ǯ��߰ڴٴ� ������ �ߴ�.
//�����ͷ� ���ڿ��� ù��° ������ N(���Ϸ��°�)�� ������Ű�鼭 ���ϸ� N�� ���� ã�� ������ �ذ��ߴ�.
//�����Ͱ� ����Ű�� ���ڿ� N���� �ڸ����� �ϳ��� ���ϸ� ���� ������ N�� �ø��鼭 ã�Ҵ�.