//boj11728_�迭 ��ġ��_����

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		result.push_back(x);
	}

	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		result.push_back(x);
	}

	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}	
//�������ͷ� Ǯ ���� �ִ� �������� ����°����� �־�� �ð��ʰ��� �����ʾ� �����ϰ� ���ķ� Ǯ����.