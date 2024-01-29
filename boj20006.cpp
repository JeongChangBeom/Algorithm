//boj20006��_��ŷ�� ��⿭_����

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Player {
	int plv = 0;
	string name = "";
};

struct Room {
	int rlv = 0;
	int count = 0;
	vector<Player> player;
};

bool compare(Player a, Player b) {
	return a.name < b.name;
}

int main() {
	int p, m;
	cin >> p >> m;

	vector<Room> v;

	for (int i = 0; i < p; i++) {
		int l;
		string n;

		cin >> l >> n;

		bool room_flag = false;

		for (int j = 0; j < v.size(); j++) {
			if (v[j].count == 0) {
				continue;
			}

			if (abs(v[j].rlv - l) > 10) {
				continue;
			}

			Player py;

			v[j].count--;

			py.plv = l;
			py.name = n;
			v[j].player.push_back(py);

			room_flag = true;
			break;
		}

		if (room_flag == false) {
			Room r;
			r.rlv = l;
			r.count = m - 1;

			Player py;
			py.plv = l;
			py.name = n;

			v.push_back(r);
			v[v.size() - 1].player.push_back(py);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		sort(v[i].player.begin(), v[i].player.end(), compare);

		if (v[i].count == 0) {
			cout << "Started!" << '\n';
			for (int j = 0; j < v[i].player.size(); j++) {
				cout << v[i].player[j].plv << " " << v[i].player[j].name << '\n';
			}
		}
		else {
			cout << "Waiting!" << '\n';
			for (int j = 0; j < v[i].player.size(); j++) {
				cout << v[i].player[j].plv << " " << v[i].player[j].name << '\n';
			}
		}
	}
}
//����ü�� ���͸� ����ؼ� ������ ����.
//���� ������ ���� �����Ѵ�.
//�濡 ������ �÷��̾��� ������ ���� ��������(ó�� ������ ����� +-10)�� �����鼭 �ڸ��� ���� ���
//���� �ƴϸ� ���� �����Ѵ�. *���ǿ� �´� ���� �������� ��� ���� ������ ���� �켱������ ����.
//�� ������ �����ϸ� �Ǵ� �����̴�.
//�׸��� ����Ҷ� �г��� ���������� ����ؾߵǱ⶧���� sort�Լ��� �̿��ߴ�.