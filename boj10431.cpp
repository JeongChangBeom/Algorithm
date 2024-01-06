//boj10431��_�ټ����_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int P;
	cin >> P;

	for (int p = 0; p < P; p++) {
		int T;
		cin >> T;

		vector<int> v;
		int sum = 0;

		for (int i = 0; i < 20; i++) {
			int height;
			cin >> height;

			if (v.empty() || *max_element(v.begin(), v.end()) == height) {
				v.push_back(height);
			}
			else {
				v.push_back(height);
				sort(v.begin(), v.end());
				sum += v.size() - (lower_bound(v.begin(), v.end(), height) - v.begin() + 1);
			}
		}

		cout << T << " " << sum << "\n";
	}
}
//��������.
//�� �� ���� Ǯ �� �־��� �� ������ Ǯ�� ���� ��û ���ΰ� ����.
//���͸� �̿��ؼ� Ǯ����, Ǯ�� ����� ���� ���ų� �Է¹��� Ű�� ���� ũ�� �ǵڿ� ���� ���� �ϰ�
//������ ū����� ���� �� ������������ ���� �����(sort�� ���) ���� (���� ���� - �� �տ� �ִ� ��� �� + ��(1))�� �ؼ�
//�� �ڿ� �ִ� ��� ���� ���ߴ�.(�� �ڿ� �ִ� ����� ���� �� ��¦�� �ڷ� ���ߵǱ� ����)