//boj7795��_���� ���ΰ� ���� ���ΰ�_�� ������

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; t++) {
		int N, M;

		cin >> N >> M;

		vector<int> A;
		vector<int> B;

		for (int i = 0; i < N; i++) {
			int num;
			cin >> num;
			A.push_back(num);
		}

		for (int i = 0; i < M; i++) {
			int num;
			cin >> num;
			B.push_back(num);
		}

		sort(A.begin(), A.end());
		sort(B.begin(), B.end());

		int result = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (A[i] <= B[j]) {
					break;
				}
				result++;
			}
		}
		cout << result << '\n';
	}
}
//A�� ����� B�� ������ ������ ���Ϳ� ������ i,j��� �ΰ��� �����͸� �ΰ� �ذ��� ����.
//A���Ϳ� B���͸� ������ �� A�� ���� B�� ���� ���ذ��� A�� ���� B�� ������ �۰ų� ���� ���
//���� �����ͷ� �ѱ�� ������ �����ߴ�.