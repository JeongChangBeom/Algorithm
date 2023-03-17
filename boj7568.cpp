//boj7568��_��ġ_���Ʈ����

#include<iostream>
#include<vector>

using namespace std;

struct People {
	int kg;
	int cm;
};

bool compare(People x, People y) {
	if (x.cm < y.cm && x.kg < y.kg) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N;
	cin >> N;

	vector<People> v;

	for (int i = 0; i < N; i++) {
		People p;
		cin >> p.kg >> p.cm;
		v.push_back(p);
	}

	for (int i = 0; i < N; i++) {
		int count = 1;
		for (int j = 0; j < N; j++) {
			if (compare(v[i], v[j])) {
				count++;
			}
		}
		cout << count << " ";
	}
}
//����ü�� �̿��Ͽ� �����Կ� Ű�� �޾� �ϳ��� ���� ���غ��� �Ǵ� ����.