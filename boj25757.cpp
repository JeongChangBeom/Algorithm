//boj25757��_�ӽ��� �Բ��ϴ� �̴ϰ���_�ڷᱸ��(���� �����̳�(set))

#include<iostream>
#include<set>

using namespace std;

int main() {
	int N;
	cin >> N;

	char game;
	cin >> game;

	set<string> s;

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;

		s.insert(name);
	}

	if (game == 'Y') {
		cout << s.size() << '\n';
	}
	if (game == 'F') {
		cout << s.size() / 2 << '\n';
	}
	if (game == 'O') {
		cout << s.size() / 3 << '\n';
	}

	return 0;
}
//�ڷᱸ�� ����.
//vector�� ����ؼ� Ǯ���� �ð��ʰ��� ����.
//�ߺ��� key�� insert�����ʴ� set�� ����ϸ� �����ϰ� �ذ��� �� �ִ�.
//�ٽ��� 2���̼� �ϴ� ������ 1��, 3���̼� �ϴ� ������ 2��, 4���̼� �ϴ� ������ 3�� ���ϸ� �ӽ��� ������ �� �ִٴ� ���̴�.