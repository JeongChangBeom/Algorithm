//boj1764��_�躸��_����? Ž��?

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <string> d;
vector <string> db;

int main() {
	int N, M;
	cin >> N >> M;

	int num = 0;

	for (int i = 0; i < N; i++) {
		string x;
		cin >> x;
		d.push_back(x);
	}

	sort(d.begin(), d.end());


	/*for (int i = 0; i < N; i++) { <- 2�� for������ ���� �ð��ʰ�
		for (int j = 0; j < M; j++) {
			if (d[i].compare(b[j]) == 0) {
				db.push_back(d[i]);
				num++;
			}
		}
	}*/

	for (int i = 0; i < M; i++) { // <- ����Ž���� �̿��� �ð��ʰ� �ذ�
		string x;
		cin >> x;

		if (binary_search(d.begin(), d.end(), x)) {
			db.push_back(x);
			num++;
		}
	}

	sort(db.begin(), db.end());

	cout << num << "\n";

	for (int i = 0; i < db.size(); i++) {
		cout << db[i] << "\n";
	}
}
//�ð� ������ 2���ε� N�� M�� ũ�Ⱑ 500000�̹Ƿ� 2�� for���� ����ϸ� �ð��ʰ��� �Ǵ� ����.
//����Ž��(logN)�� ����Ͽ� �ذ��� �� �־��� ����. 