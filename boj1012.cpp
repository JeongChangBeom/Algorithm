//boj1012��_���ϳ� ����_�׷���(DFS)

#include <iostream>

using namespace std;

int graph[51][51];
bool visited[51][51];
int num;

int xy[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };


void DFS(int x, int y) {
	num++;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int x2 = x + xy[i][0];
		int y2 = y + xy[i][1];
		if (x2 >= 0 && x2 <= 50 && y2 >= 0 && y2 <= 50 && graph[x2][y2] && !visited[x2][y2]) {
			DFS(x2, y2);
		}
	}
}

int main() {
	int T;
	cin >> T;
	for (int test = 0; test < T; test++) {
		int M, N, K;
		cin >> M >> N >> K;

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				graph[i][j] = 0;
			}
		}

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				visited[i][j] = 0;
			}
		}

		for (int i = 0; i < K; i++) {
			int x, y;
			cin >> x >> y;
			graph[x][y] = 1;
		}

		int count = 0;

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (graph[i][j] == 1 && !visited[i][j]) {
					DFS(i, j);
					count++;
				}
			}
		}
		cout << count << "\n";
	}

	return 0;
}
//DFS�� ����ؼ� �ذ��� ����. ���� �����ϸ� ���� �׷����� � ���� ���� �����̴�.
//DFS�� ���� �׷����� Ž���ϰ� DFS�� ������ �ϳ��� ���� �׷����� �����ϰ� count�� �ø��� ������ Ǯ����.