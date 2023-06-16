//boj11497��_�볪�� �ǳʶٱ�_����

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int k = 0; k < T; k++) {
		int N;
		cin >> N;

		vector<int> v;

		for (int i = 0; i < N; i++) {
			int num;
			cin >> num;
			v.push_back(num);
		}

		sort(v.begin(), v.end());

		vector<int> result1;
		stack<int> result2;

		for (int i = 0; i < v.size(); i++) {
			if (i % 2 == 0) {
				result1.push_back(v[i]);
			}
			else {
				result2.push(v[i]);
			}
		}

		vector<int> result;

		for (int i = 0; i < result1.size(); i++) {
			result.push_back(result1[i]);
		}

		while (!result2.empty()) {
			result.push_back(result2.top());
			result2.pop();
		}

		int max_num = 0;

		for (int i = 1; i < result.size(); i++) {
			max_num = max(max_num, abs(result[i] - result[i - 1]));
		}
		max_num = max(max_num, abs(result[result.size() - 1] - result[0]));
		
		cout << max_num << '\n';
	}
}
//������ ����ؼ� Ǯ �� �ִ� ����.
//������ ������ �����Ϸ��� ������������ ������ ���� ������ ���ư��鼭 �հ� �ڷ� ��ġ�ϸ� �ȴ�.
//������ ���ø� ���� ���� ��� 2,4,5,7,9�� �Է¹޾��� �� 2,4 / 2,5,7,4 / 2,5,9,7,4 �̷������� ��ġ�� ��
//���ݰ��� �ִ밪�� ���ϸ� �װ��� ������ �ش��̴�. ó���� ������ ���� ���밪���� ������ �ʾ� ����ó���ƾ���.