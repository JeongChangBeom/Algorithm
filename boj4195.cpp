//boj4195��_ģ�� ��Ʈ��ũ_�и�����

#include<iostream>
#include<map>

using namespace std;

int p[200001];
int result[200001];

void Make_Set(int x) { //���� ����
	p[x] = x;
}

int Find_Set(int x) { //���տ��� �θ� ã��
	if (p[x] == x) {
		return x;
	}
	else {
		return p[x] = Find_Set(p[x]);
	}
}

void Union(int x, int y) { //���� ��ġ�鼭 ���ճ� ���� ���� ����
	if (Find_Set(x) != Find_Set(y)) {
		result[Find_Set(x)] += result[Find_Set(y)];
		result[Find_Set(y)] = result[Find_Set(x)];

		p[Find_Set(y)] = Find_Set(x);
	}

	cout << result[Find_Set(x)] << "\n";
}

int main() {
	ios::sync_with_stdio(false); //����� ����
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		map<string, int> m;
		int F;
		cin >> F;

		for (int j = 0; j < F * 2; j++) { //�ʱ�ȭ
			Make_Set(j);
			result[j] = 1;
		}

		int num = 1;
		for (int j = 0; j < F; j++) { //���ڿ��� �̸��� �޾� ���� ��ȣ �ű��
			string name1, name2;
			cin >> name1 >> name2;

			if (m[name1] == 0) {
				m[name1] = num++;
			}

			if (m[name2] == 0) {
				m[name2] = num++;
			}

			Union(m[name1], m[name2]);
		}
	}
}
//������ �ٸ� ������� ���ٸ��� ���� ��������, �Է°��� ���ڿ��̶� map�� ����ؾ� �Ǵ� ����