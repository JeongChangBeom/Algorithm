//boj1269��_��Ī ������_�ڷᱸ��<��>

#include<iostream>
#include<map>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	map<int, bool> m;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		m.insert({ x,true });
	}

	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		if (m.count(x) != 0) {
			m.erase(x);
		}
		else {
			m.insert({ x,true });
		}
	}

	cout << m.size();
}
//map�� ����ؼ� Ǯ �� �ִ� ����. ó���� ����A�� �Է� �ް� ���� B�� ���� �Է� �����鼭 ����A�� �����ϴ� ���̸�
//���� A���� �����ϰ� ������ ����A�� �߰����Ŀ� ����A�� ��� ���Ұ� �ִ��� ����Ͽ� �ذ��ߴ�.