//boj4659��_��й�ȣ �����ϱ�_����

#include<iostream>

using namespace std;

int main() {
	while (1) {
		string  str;
		bool acc = false;
		int x = 0;
		int y = 0;

		cin >> str;

		if (str == "end") {
			return 0;
		}

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
				acc = true;
			}
		}

		if (!acc) {
			cout << "<" << str << ">" << " is not acceptable." << '\n';
		}
		else {
			for (int i = 0; i < str.size(); i++) {
				if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
					x++;
					y = 0;
				}
				else {
					x = 0;
					y++;
				}
				if (x == 3 || y == 3) {
					acc = false;
				}
			}

			for (int i = 0; i < str.size() - 1; i++) {
				if (str[i] == str[i + 1]) {
					if ((str[i] == 'e' && str[i + 1] == 'e') || (str[i] == 'o' && str[i + 1] == 'o')) {
						continue;
					}
					else {
						acc = false;
						break;
					}
				}
			}
			
			if (acc) {
				cout << "<" << str << ">" << " is acceptable." << '\n';
			}
			else {
				cout << "<" << str << ">" << " is not acceptable." << '\n';
			}
		}
	}
}

//��������.
//���ڿ��� �Է¹ް� �� ���ھ� ���ǿ� ���� �˻��ϸ� �Ǵ� ����.