//boj1436��_��ȭ���� ��_���Ʈ����

#include<iostream>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int x = 666;
	int count = 0;

	while (true) {
		string s_x = to_string(x);
		for (int i = 0; i <= s_x.length() - 3; i++) {
			if (s_x[i] == '6' && s_x[i + 1] == '6' && s_x[i + 2] == '6') {
				count++;
				break;
			}
		}

		if (count == N) {
			cout << x;
			break;
		}
		x++;
	}
}

//666�� 1�� �÷����� 666�� ����ִ� N�� ° ���� ���� ã�Ҵ�. (666 667 668 ... 1664 1665 1666)