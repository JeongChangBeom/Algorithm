//boj1475��_�� ��ȣ_����

#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int main() {
	int result[9] = { 0, };
	string N;
	cin >> N;

	for (int i = 0; i < N.length(); i++) {
		if (N[i] == '9') {
			result[6]++;
		}
		else {
			result[N[i] - 48]++;
		}
	}

	result[6] = ceil((double)result[6] / 2);
	cout << *max_element(result, result + 9);

}
//���Ǵ�� �����ϸ� �Ǵ¹���, 6�� 9�� ����� ����� �� �ִٴ� ���Ǹ� �Ű澲�� ���� Ǯ �� �ִ� ����.
//9�� �Է¹޾����� 6�� ������Ű�� �ڿ��� 6�� ������ ������ �ø��ؼ� ����ؼ� �ذ��ߴ�.