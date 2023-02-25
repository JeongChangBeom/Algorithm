//boj1629��_����_���������� �̿��� �ŵ�����

#include<iostream>

using namespace std;


long long pow(long long a, long long b, long long c) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a % c;
	}
	long long half = pow(a, b / 2, c);
	if (b % 2 == 0) {
		return (half * half) % c;
	}
	else {
		return(((half) * (half) %c * a )% c);
	}
}

int main() {
	ios::sync_with_stdio(false); //����� ����
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << pow(a, b, c);
}

//�Ѻ��⿡�� ��û ���� ���̴� �������� �ð������� 0.5�� �ɷ��־ ������� ����.
//a^b = a^(b/2) x a^(b/2) <- �̷��� ���������� �̿��� �ŵ������� ����ؼ� Ǯ �� �־���.
//0.5�ʸ� ���߱����� �߰��߰� ��ⷯ ������ �ϴ� ���� �߿��ϴٰ� �����Ѵ�.