//boj2607��_����� �ܾ�_����

#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int first_alpha[26];
string arr[101];

int compare(int arr1[], string word) {
	int same = 0;

	int arr2[26];
	for (int i = 0; i < 26; i++) {
		arr2[i] = arr1[i];
	}

	for (int i = 0; i < word.size(); i++) {
		if (arr2[word[i] - 'A'] > 0) {
			arr2[word[i] - 'A']--;
			same++;
		}
	}

	return same;
}

int main() {
	int N;
	cin >> N;


	int result = 0;
	int first_length = 0;
	int next_length = 0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			first_length = arr[i].size();

			for (int j = 0; j < arr[i].size(); j++) {
				first_alpha[arr[i][j] - 'A']++;
			}
		}
		else {
			next_length = arr[i].size();

			if (first_length == next_length) {
				if (compare(first_alpha, arr[i]) == first_length || first_length - compare(first_alpha, arr[i]) == 1) {
					result++;
				}
			}
			else if (first_length - next_length == 1) {
				if (first_length - compare(first_alpha, arr[i]) == 1) {
					result++;
				}
			}
			else if (first_length - next_length == -1) {
				if (first_length == compare(first_alpha, arr[i])) {
					result++;
				}
			}
		}
	}
	cout << result;
}
//��������.
//����� �ָԾ��� �����̴�. ���� ������ �������� �� ���� �ܾ ���������� ���ڷ� �̷���� ������, ���� ���ڴ� ���� ���� ��ŭ �־�ߵȴ�.
//�� ������ �ܼ��ϰ� ���� ������ ���� �ܾ ã�� ���̾ƴ϶�, ����� �ܾ ã�� ���ε� �� ������ ���� ������ ���ų�, �� ���ڸ� ���ϰų�, ���ų�
//�ٸ� ���ڷ� �ٲ��� �� ���� ������ ���� �ܾ ã�� ���̴�.
//����� �ܾ ã�� �ٽ��� �� 3������ 1. �� ���� �ܾ��� ���̰� ���� ��, ������ ������ �ѱ��ڸ� �ٸ��� �˻�, 2. ù ��° �ܾ �� ���� �涧 �� ���ڸ� �߰��ؼ� ����� �ܾ �Ǵ���
//3. ù ��° �ܾ �� ���� ª�� �� �� ���ڸ� ���� ����� �ܾ �� �� �ִ���. �̷��� 3������ �����ϸ� �ذ��� �� �ִ�.