//boj2178��_�̷� Ž��_�׷���

#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

int graph[101][101];
int dist[101][101];//�Ÿ��� �����ϱ� ���� �迭
bool visited[101][101];
int N, M;

int xy[4][2] = { {0,1},{0,-1},{1,0},{-1,0} }; //4����

void BFS(int v1, int v2) {
	visited[v1][v2] = true;
	dist[v1][v2]++;

	queue<pair<int,int>> q;
	q.push({ v1,v2 });

	while (q.empty() == false) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int x2 = x + xy[i][0];
			int y2 = y + xy[i][1];
			if (x2 >= 0 && x2 < N && y2 >= 0 && y2 < M && graph[x2][y2] && !visited[x2][y2]) {
				visited[x2][y2] = true;
				q.push({ x2,y2 });
				dist[x2][y2] = dist[x][y] + 1; //���� ť������ �Ÿ� +1
			}
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &graph[i][j]); //�پ� �ִ� ���� �Է¹ޱ� ���� %1d ��� 
		}
	}

	BFS(0, 0);

	cout << dist[N - 1][M - 1]; //C6385 ��� ������ ������ ���� X
}
//�ִ� �Ÿ��� ���ϴ� ������ ������ DFS�� �ƴ� BFS�� ����ؼ� Ǯ����.