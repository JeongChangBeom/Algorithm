//boj9659��_�� ���� 5_���� �̷�

#include<iostream>
#include<vector>

using namespace std;


int main() {
	long long N;
	cin >> N;

	if ((N % 2) == 0) {
		cout << "CY";
	}
	else {
		cout << "SK";
	}
}

//���� 1�� or 3�� ������ �� �ְ� �λ���� �Ϻ��ϰ� ������ �����ϱ� ������
//��Ģ�� �����غ��� 2�� ����� ��� â���̰� 2�� ����� �ƴ� ��� ����̰� �¸��Ѵ�.
//�׸��� N�� ������ 1000000000000�����Ƿ� long longŸ���� ����ؾ��Ѵ�.