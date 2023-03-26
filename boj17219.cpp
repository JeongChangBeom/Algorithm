//boj17219��_��й�ȣ ã��_�ڷ� ����(��)

#include<iostream>
#include<map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	map<string, string> site;

	for (int i = 0; i < N; i++) {
		string name;
		string password;

		cin >> name;
		cin >> password;

		site.insert(make_pair(name, password));
	}
	

	for (int i = 0; i < M; i++) {
		string key;
		cin >> key;

		cout << site[key] << "\n";
	}
}
//���� ���ʸ� �ٷ�� ����. ���̶�� �ڷᱸ���� ����� �� �ְ�,
//���� Ư���� ���� key���� ���� value���� ã�� �� ������ ���� Ǯ �� �ִ� ����.