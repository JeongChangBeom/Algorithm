//boj1924��_2007��_����,����

#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };

	int date = 0;
	for (int i = 0; i < x - 1; i++) {
		date += month[i];
	}
	date += y;

	switch (date % 7) {
	case 1:
		cout << day[0] << "\n";
		break;
	case 2:
		cout << day[1] << "\n";
		break;
	case 3:
		cout << day[2] << "\n";
		break;
	case 4:
		cout << day[3] << "\n";
		break;
	case 5:
		cout << day[4] << "\n";
		break;
	case 6:
		cout << day[5] << "\n";
		break;
	case 0:
		cout << day[6] << "\n";
		break;
	}
	return 0;
}
//������ ���� ����. ������ü�� ����� ������ ������ Ʋ�� ���� ���������� ������ ���ؾ� �ϴ� ����.
//1�� 1�Ϻ��� ��ĥ�� �������� date�� ���Ͽ� �� ���� 7�� ���� �������� ���� ���� �������� �� �� �ִ�.
