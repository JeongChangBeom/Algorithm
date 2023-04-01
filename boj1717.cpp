//boj1717��_������ǥ��_�и�����

#include<iostream>

using namespace std;

int p[1000001];

void Make_Set(int x) { //
	p[x] = x;
}

int Find_Set(int x) {
	if (p[x] == x) {
		return x;
	}
	else {
		return p[x] = Find_Set(p[x]);
	}
}

void Union(int x, int y) {
	p[Find_Set(y)] = Find_Set(x);
}

int main() {
	ios::sync_with_stdio(false); //����� ����
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int x, a, b;

	cin >> n >> m;

	for (int i = 0; i <= n; i++) { //0~n���� ������ ���ջ���
		Make_Set(i);
	}

	for (int i = 0; i < m; i++) {
		cin >> x >> a >> b;
		if (x == 0) {
			Union(a, b);
		}
		else if (x == 1) {
			if (Find_Set(a) == Find_Set(b)) {
				cout << "YES" << "\n";
			}
			else {
				cout << "NO" << "\n";
			}
		}
	}
}
//Ʈ���� �̿��� ����ó���� Ǯ �� �ִ� ����