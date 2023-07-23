//boj9996��_�ѱ��� �׸��� �� ������ ��������_���ڿ�

#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	string pat;
	cin >> pat;

	int star = pat.find('*');

	string first = pat.substr(0, star);
	string last = pat.substr(star + 1);


	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str.length() < first.length() + last.length()) {
			cout << "NE" << "\n";
			continue;
		}

		string strfirst = str.substr(0, first.size());
		string strlast = str.substr(str.size() - last.size());

		if (strfirst == first && strlast == last) {
			cout << "DA" << '\n';
		}
		else {
			cout << "NE" << '\n';
		}
	}
}
//���ڿ��� �Ϻθ� �����ϴ� substr�� ����ؼ� ������ ���� �ذ��� ����.
//�Է��� ���� ���ڿ��� ������ ���� ���� ª���� out of range�� ������ ���� �����ؼ� Ʋ�Ⱦ���.