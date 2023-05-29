//boj1806��_�κ���_��������


#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[100001];
vector <int> result;

int main() {
	int N, S;
	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int start = 0;
	int end = 0;
	int sum = 0;
	int num = 0;

	while (end <= N && start <= end) {
		if (sum >= S) {
			result.push_back(num);
			sum -= arr[start];
			start++;
			num--;
		}
		else {
			sum += arr[end];
			end++;
			num++;
		}
	}

	sort(result.begin(), result.end());

	if (result.size() == 0) {
		cout << "0";
	}
	else {
		cout << result.front();
	}
	return 0;
}
//start�� end �ΰ��� �����͸� ����� �� ������ ������ ������ ���� �κ����̶�� �����ϰ� Ǯ�� �ذ��� �� �ִ� ����