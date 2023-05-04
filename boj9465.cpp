//boj9465��_��ƼĿ_dp

#include<iostream>

using namespace std;

int arr1[100001];
int arr2[100001];
int dp1[100001];
int dp2[100001];

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		for (int j = 1; j <= N; j++) {
			cin >> arr1[j];
		}
		for (int j = 1; j <= N; j++) {
			cin >> arr2[j];
		}

		dp1[1] = arr1[1];
		dp2[1] = arr2[1];

		for (int j = 2; j <= N; j++) {
			dp1[j] = arr1[j] + max(dp2[j - 1], dp2[j - 2]);
			dp2[j] = arr2[j] + max(dp1[j - 1], dp1[j - 2]);
		}
		cout << max(dp1[N], dp2[N]) << "\n";
	}
}
//1������ java�� Ǯ���� dp������ ���� ���� Ǯ �� �־���.
//ó���� �����ߴµ� ���� �´°� ������ Ʋ�ȴٰ� ���ͼ� ���� ����ߴµ�
//������ ���� ����� �� ���๮�ڸ� ���� ���� ���̿���...������ ������ ���� �Ĳ��� �����Ұ� ����.