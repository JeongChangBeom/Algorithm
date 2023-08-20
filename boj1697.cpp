//boj1697��_���ٲ���_�׷���(�ʺ�켱Ž��)

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int visited[200001];

int main() {
	int N, K;
	cin >> N >> K;

	queue<int> q;
	q.push(N);

	visited[N] = 1;

	while (q.empty() == false) {
		int V = q.front();
		q.pop();

		if (V == K) {
			cout << visited[V] - 1;
			break;
		}
		if (V >= 0 && V <= 100000) {
			if (visited[V - 1] == 0) {
				visited[V - 1] = visited[V] + 1;
				q.push(V - 1);
			}
			if (visited[V + 1] == 0) {
				visited[V + 1] = visited[V] + 1;
				q.push(V + 1);
			}
			if (visited[V * 2] == 0) {
				visited[V * 2] = visited[V] + 1;
				q.push(V * 2);
			}
		}
	}

	return 0;
}
//BFS�� �����ϰ� Ǯ �� �ִ� ����.
//������ �� ã���� V-1,V+1,V*2�� �ؼ� �湮�߾����� Ȯ���� �ϰ� �湮�� ���� �ʾ������ ť�� �־��ָ� �ȴ�.