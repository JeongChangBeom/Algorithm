//boj24060��_�˰��� ���� - ���� ���� 1_����

#include<iostream>
#include<vector>

using namespace std;

int N;
int K;
int cnt = 0;
int* tmp;


void merge(vector<int> &A, int p, int q, int r) {
	int i = p;
	int j = q + 1;
	int t = 1;

	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			tmp[t++] = A[i++];
		}
		else {
			tmp[t++] = A[j++];
		}
	}

	while (i <= q) {
		tmp[t++] = A[i++];
	}

	while (j <= r) {
		tmp[t++] = A[j++];
	}

	i = p;
	t = 1;

	while (i <= r) {
		A[i++] = tmp[t++];
		if (++cnt == K) {
			cout << tmp[t - 1];
		}
	}
}

void merge_sort(vector<int> &A, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;

		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main() {
	cin >> N >> K;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	tmp = new int[N];
	merge_sort(v, 0, N - 1);

	if (cnt < K) {
		cout << "-1";
	}
}
//���������� �����ϴ� ����.
//ó���� merge�� merge_sort�� �����Ҷ� vector�� ���������� ������� �ʾ� �ð��ʰ��� ������.
//�����ڸ� ����ϸ� ���� �����ϴ� �ð��� ���ϼ� �־� �ð��ʰ��� ���� �ʴ� �� ����.