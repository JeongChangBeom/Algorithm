//boj1010��_�ٸ�����_����

#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;

		int result = 1;
		int x = 1;
		for (int i = M; i > M - N; i--) {
			result *= i;
			result /= x++;
		}

		cout << result << "\n";
	}
}
//�� ó������ nCr = n!/(n-r)!r! �̶�� ������ ����ؼ� ���丮���� ����ؼ� Ǯ�� �ǰڴ� �����ߴµ�
//3��° �׽�Ʈ ���̽����� 29���丮���� ����ϸ鼭 �����÷ο찡 �߻��ߴ�. �׷��� ������ Ǯ�
//�⺻ ������� for���� ����ؼ� Ǯ������ �¾Ҵ�.