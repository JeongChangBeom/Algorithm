//boj1431��_�ø��� ��ȣ_����

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(string A, string B) {
	int Asum = 0;
	int Bsum = 0;
	
	if (A.size() != B.size()) {
		return A.size() < B.size();
	}

	if (A.size() == B.size()) {
		for (int i = 0; i < A.size(); i++) {
			if ('0' <= A[i] && A[i] <= '9') {
				Asum += A[i] - '0';
			}
			if ('0' <= B[i] && B[i] <= '9') {
				Bsum += B[i] - '0';
			}
		}
		if (Asum != Bsum) {
			return Asum < Bsum;
		}
	}

	return A < B;
}

int main() {
	int N;
	cin >> N;

	vector<string> v;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
//���Ĺ����� ������ �־��� ���� ������ ��Ȯ�� �ľ��ϰ� compare �Լ��� �ۼ��ϴ� ���� �ٽ��̴�.