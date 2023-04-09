//boj11724��_���� ����� ����_�׷���

#include<iostream>

using namespace std;

int graph[1001][1001];
bool visited[1001];
int N, M;
int result;

void DFS(int V) {
	visited[V] = true;

	for (int i = 1; i <= N; i++) {
		if (graph[V][i] == 1 && visited[i] == false) {
			DFS(i);
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 1; i <= M; i++) {
		int x, y;
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (visited[i] == false) {
			result++;

			DFS(i);
		}
	}

	cout << result;
}
//�־��� �׷����� DFS�� ���� Ž���ϸ鼭 �����Ҹ� ���ֱ⸸ �ϸ� �Ǵ� ����.