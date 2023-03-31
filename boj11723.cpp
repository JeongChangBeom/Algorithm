//boj11723��_����_����

#include<iostream>
#include<vector>

using namespace std;

int arr[21] = { 0 };

int main() {
	ios_base::sync_with_stdio(false); //����� ���� ������ �ð��ʰ�
	cin.tie(NULL);
	cout.tie(NULL);

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;

		int x;
		if (s == "add") {
			cin >> x;
			if (arr[x] == 0) {
				arr[x] = 1;
			}
		}
		else if (s == "remove") {
			cin >> x;
			if (arr[x] == 1) {
				arr[x] = 0;
			}
		}
		else if (s == "check") {
			cin >> x;
			if (arr[x] == 0) {
				cout << "0" << "\n";
			}
			else {
				cout << "1" << "\n";
			}
		}
		else if (s == "toggle") {
			cin >> x;
			if (arr[x] == 1) {
				arr[x] = 0;
			}
			else {
				arr[x] = 1;
			}
		}
		else if (s == "all") {
			for (int j = 0; j < 21; j++) {
				arr[j] = 1;
			}
		}
		else if (s == "empty") {
			for (int j = 0; j < 21; j++) {
				arr[j] = 0;
			}
		}
	}
}
//�ܼ� ���� ������ �� �˰� ���� �״�� ���� �ߴٰ� �ð��ʰ��� ���ͼ� ����°����� �غ��� ����ߴ�.
//ã�ƺ��� ���� �ܼ� ���� ������ �ƴ� �񽺸���ũ�� �̿��� Ǫ�� ������ �� ���� ������ �ٽ� �����غ��� �Ѵ�.