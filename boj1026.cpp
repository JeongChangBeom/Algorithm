//boj1026��_����_�׸���˰���, ����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int x, int y) {
	return y < x;
}

int main() {
	int N;
	cin >> N;

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
	}

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v2.push_back(x);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), compare);

	int result = 0;

	for (int i = 0; i < v1.size(); i++) {
		result += v1[i] * v2[i];
	}

	cout << result;
}
//ù��° ���͸� ������������ �����ϰ�, �ι�° ���͸� ������������ �����Ѵ���
//���������� ���ϸ� �ּڰ��� ���´�. ������ �о�� �ι�° ���Ϳ� �ִ� ����
//��迭(����)�ϸ� �ȵȴٰ� �����ִµ� ���� ���� Ǯ� ����ó���� �ȴ�.
//������ ������ �ְų� ���� ���� ���� �κ��� �ִ� �� ����.