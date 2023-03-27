//boj11399��_ATM_����

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct people {
	int num;
	int time;
};

bool compare(people x, people y) {
	if (x.time < y.time) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N;
	cin >> N;

	vector<people> v;

	for (int i = 1; i <= N; i++) {
		people p;
		p.num = i;
		cin >> p.time;
		v.push_back(p);
	}

	sort(v.begin(), v.end(), compare);

	int result = 0;
	int sum = 0;

	for (int i = 0; i < v.size(); i++) {
		sum += v[i].time;
		result += sum;
	}

	cout << result;
}
//�ɸ��� �ð��� ª�� ����� ���� ���� ���� ���������� �ɸ��� �ð��� ª��.
//�׷��Ƿ� �ð��� ª�� ������ �����ؼ� �ð��� �����ָ� �Ǵ� ����.