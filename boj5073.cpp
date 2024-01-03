//boj5073��_�ﰢ���� �� ��_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	while (1) {
		int x, y, z;
		vector<int> v;
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0) {
			return 0;
		}

		if (x == y && y == z && z == x) {
			cout << "Equilateral" << '\n';
		}

		v.push_back(x);
		v.push_back(y);
		v.push_back(z);
		
		sort(v.begin(), v.end());

		if (v[0] + v[1] > v[2]) {
			if ((x == y && y != z) || (y == z && z != x) || (z == x && x != y)) {
				cout << "Isosceles" << '\n';
			}
			if (x != y && y != z && z != x) {
				cout << "Scalene" << '\n';
			}
		}
		else {
			cout << "Invalid" << '\n';
		}

	}
}

//���� ����.
//�ﰢ���� �� �� �ִ� ������ ���� �κ��� ������ ���� ���� �� ���� ���̺��� Ŀ�ߵȴٴ� ���� �����ϸ� ���� �ذ��� �� �ִ�.
//�� ���� ���̸� vector�� �ְ� ���� �� ���� ���� �κ��� �հ� ���� �� ���� ���̸� ���ؼ� �ذ��ߴ�.