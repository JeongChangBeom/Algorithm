//boj14425��_���ڿ� ����_���� Ž��

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<string> v1;
	vector<string> v2;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		v1.push_back(s);
	}

	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		v2.push_back(s);
	}

	sort(v1.begin(), v1.end());

	int count = 0;

	for (int i = 0; i < M; i++) {
		if (binary_search(v1.begin(), v1.end(), v2[i])) {
			count++;
		}
	}
	cout << count;
}
//������ �±״� �ڷᱸ���̸� �ؽø� �̿��� ���հ� ������ ���������� ����Ž������ Ǯ���� ������
//���� ����Ž������ Ǯ������ �ذ�ƴ�. ����Ž���� ������ �� �迭�̳� ���Ϳ��� ����� �� �ִ� ���� �߿��ϴ�