//boj13335��_Ʈ��_�ڷᱸ��(ť)

#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n, w, L;
	cin >> n >> w >> L;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int car;
		cin >> car;
		v.push_back(car);
	}

	queue<int> q;
	int weight = 0;
	int result = 0;

	for (int i = 0; i < n; i++) {
		while (true) {
			if (q.size() == w) {
				weight -= q.front();
				q.pop();
			}

			if (v[i] + weight <= L) {
				break;
			}

			q.push(0);
			result++;
		}
		q.push(v[i]);
		result++;
		weight += v[i];
	}

	cout << result + w;
}
//�ڷᱸ�� ť ����.
//�Է� ���� Ʈ���� ���� vector�� �����س��ٰ� queue�� �ϳ��� �ִ����߰� �ٸ��� ���̸� �߻����ؼ� �ű�� �Ǵ� �����̴�.
//�ٽ��� ������ Ʈ���� ȥ�� ���� ���� �ɸ��� �ð��� �ٸ�����(w)�� �����(result)�� �����ִ� ���̴�.
//������ Ǯ�����µ� ���ؿ��� �޸� �ʰ��� ���� �ٽ� Ǭ �����̴�. (Ǯ���� ��ÿ��� ����� �ƾ�������...)