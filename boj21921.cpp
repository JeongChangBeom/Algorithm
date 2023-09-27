//boj21921��_��α�_���� ��

#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;

	vector<int> v;
	v.push_back(0);

	int sum = 0;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		sum += num;

		v.push_back(sum);
	}

	int max = v[X];
	int count = 1;

	for (int i = 1; i <= v.size() - X; i++) {
		int Asum = v[i + X] - v[i];
	
		if (Asum > max) {
			max = Asum;
			count = 1;
		}
		else if (Asum == max) {
			count++;
		}
	}

	if (max == 0) {
		cout << "SAD";
	}
	else {
		cout << max << '\n' << count;
	}
}
//�������� ������� �ʰ� ����for���� �̿��ϸ� �ð��ʰ��� ���¹���
//�������� ���� �Ⱓ�� �湮�ڼ��� ���� �ִ밪�� �����ذ��� �ذ��ߴ�.