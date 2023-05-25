//boj1992��_����Ʈ��_��������,���

#include<iostream>

using namespace std;

int graph[65][65];

void QuadTree(int x, int y, int size) {
	int index = graph[x][y];

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (graph[i][j] != index) {
				cout << '(';
				QuadTree(x, y, size / 2);
				QuadTree(x, y + size / 2, size / 2);
				QuadTree(x + size / 2, y, size / 2);
				QuadTree(x + size / 2, y + size / 2, size / 2);
				cout << ')';
				return;
			}
		}
	}
	cout << index;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf_s("%1d", &graph[i][j]);
		}
	}
	QuadTree(0, 0, N);
}
//���� ������ �̿��Ͽ� �ð����⵵ O(nlogn)���� Ǯ �� �ִ� ����. �־��� �׷����� ���� 0 �Ǵ� 1�� �� ����� �ϰ�
//�ƴ� ��쿡 ������, ��������, ���ʾƷ�, �����ʾƷ��� 4����Ͽ� �ٽ� �׷����� ���� 0�Ǵ� 1�� �� ����ϴ� ��͸� ����ߴ�.