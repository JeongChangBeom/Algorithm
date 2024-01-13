//boj9017��_ũ�ν� ��Ʈ��_����

#include<iostream>

using namespace std;

struct team {
	int count;
	int score;
	int fifth_score;
	int fifth_count;
};

team tm[201];
int arr[1001];

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		for (int i = 0; i < 201; i++) {
			tm[i].count = 0;
			tm[i].score = 0;
			tm[i].fifth_score = 0;
			tm[i].fifth_count = 0;
		}

		int N;
		cin >> N;	

		int rank_count = 1;
		int min_team;

		for (int i = 0; i < N; i++){
			int rank;
			cin >> rank;
			arr[i] = rank;
			tm[rank].count++;
		}

		for (int i = 0; i < N; i++) {
			if (tm[arr[i]].count < 6) {
				continue;
			}
			else {
				if (tm[arr[i]].fifth_count < 4) {
					tm[arr[i]].score += rank_count;
				}			
				if (tm[arr[i]].fifth_count == 4) {
					tm[arr[i]].fifth_score = rank_count;
				}
				tm[arr[i]].fifth_count++;
				rank_count++;
			}
		}

		for (int i = 0; i < 201; i++) {
			if (tm[i].count < 6) {
				continue;
			}
			else {
				min_team = i;
				break;
			}
		}

		for (int i = 0; i < 201; i++) {
			if (tm[i].score == 0) {
				continue;
			}
			else {
				if (tm[min_team].score > tm[i].score) {
					min_team = i;
				}
				else if (tm[min_team].score == tm[i].score) {
					if (tm[min_team].fifth_score > tm[i].fifth_score) {
						min_team = i;
					}
				}
				else {
					continue;
				}
			}
		}
		cout << min_team << '\n';
	}
}
//��������.
//����� ���ϴ� ������ ���� ����ü�迭�� ���� ���� ����, 5���� ����, �� �ο� �� ���� ������ �����ذ��� Ǯ����.
//������ �������� ������ ��� 6���� ���� �� ��� ó���϶���� �ȳ����־� �򰥷ȴ�.
//���̵��� �ǹ�3���� �����ִµ� �ǹ�3������ ���� �ƴ� �� ����.