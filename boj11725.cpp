//boj11725��_Ʈ���� �θ� ã��_�׷���

#include<iostream>
#include<vector>

using namespace std;

vector<int> graph[100001];
bool visited[100001];
int parent[100001];
int N;

void DFS(int V) {

	visited[V] = true;

	for (int i = 0; i < graph[V].size(); i++) {
;		if (!visited[graph[V][i]]) {
			parent[graph[V][i]] = V;
			DFS(graph[V][i]);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	DFS(1);

	for (int i = 2; i <= N; i++) {
		cout << parent[i] << "\n";
	}
}
//ó���� Ʈ���� ���� Ǯ���ٰ� dfs�� ���Ұ� ���Ƽ� �׷����� �̿��ؼ� �ذ��� ����.