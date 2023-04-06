//boj2606��_���̷���_�׷���

#include<iostream>

using namespace std;

int computer[101][101];
bool visited[101];
int N, M;
int result = 0;

void DFS(int V) {
	visited[V] = true;

	for (int i = 1; i <= N; i++) {
		if (computer[V][i] == 1 && visited[i] == false) {
			result++;
			DFS(i);
		}
	}
}

int main() {
	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		computer[x][y] = 1;
		computer[y][x] = 1;
	}

	DFS(1);

	cout << result;
}
//DFS�� ����� �ذ��� ����. ����Ǿ��ִ� �׷����� 1�� �ʱ�ȭ�ϰ� DFS�� ���� Ž�����ָ鼭
//Ž���ϴ� �� ��ŭ result�� �÷��ָ� ���� ���´�.