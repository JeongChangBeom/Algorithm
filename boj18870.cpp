//boj18870��_��ǥ ����_����, ��/��ǥ ����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v1;
vector<int> v2;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
		v2.push_back(x);
	}
	sort(v1.begin(), v1.end());

	v1.erase(unique(v1.begin(), v1.end()), v1.end());

	for (int i = 0; i < v2.size(); i++) {
		int index = lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
		cout << index << " ";
	}
}
//��ǥ���� = �Է¹��� ���� ������ �Է� ���� ���� �ξ� ���� �� �迭�� ���� ���ο� �ε����� �ο��ϴ� ��
//���� ���� -> ���� �ߺ��� ���� -> ����� ���Ϳ��� �̺�Ž������ ���� ��ġ ã��