//boj1259��_�縰��Ҽ�_����

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string x;

	while (true) {
		string y;
		cin >> x;

		if (x == "0") {
			break;
		}
		y = x;
		reverse(x.begin(), x.end());

		if (y.compare(x) == 0) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
}
//���� int ���� �ƴ� string���� �޾� reverse�Լ��� ����� Ǯ �� �ִ� ����