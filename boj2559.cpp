//boj2559��_����_�� ������

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int arr[100001];
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	int start = 0;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		sum += arr[i];
		if (i >= (M - 1)) {
			v.push_back(sum);
			sum -= arr[start];
			start++;
		}
	}

	sort(v.begin(), v.end());

	cout << v.back();
}
//�迭�� ���� ���ӵǴ� M�� ������ �µ��� ���� ���ϸ� ���Ϳ� �����ϰ�, ���͸� ������ �� �ǵ� ���Ҹ� ����ϸ� �ִ밪�� �ȴ�.