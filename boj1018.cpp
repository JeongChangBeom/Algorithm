//boj1018��_ü���� �ٽ� ĥ�ϱ�_���Ʈ����

#include<iostream>
#include<algorithm>

using namespace std;

char arr[51][51];

char WB[51][51] = { {'W','B','W','B','W','B','W','B'}, //W�� �����ϴ� ü����
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'}, 
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'}, 
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'}, 
                    {'B','W','B','W','B','W','B','W'} };

char BW[51][51] = { {'B','W','B','W','B','W','B','W'}, //B�� �����ϴ� ü����
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'} };

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf_s("%1s", &arr[i][j], N * M); //���� ���� �Է� ����(scanf_s�� ���ؿ��� ������ ������ ����)
        }
    }

    int min_num = 99999;
    int result;

    for (int i = 0; i + 8 <= N; i++) { //ü������ 8*8���� �ڸ���
        for (int j = 0; j + 8 <= M; j++) {
            int WB_cnt = 0;
            int BW_cnt = 0;

            for (int x = 0; x < 8; x++) { //ü���ǿ��� �߸� ĥ���� ���� Ȯ��
                for (int y = 0; y < 8; y++) {
                    if (arr[x+i][y+j] != WB[x][y]) {
                        WB_cnt++;
                    }
                    if (arr[x+i][y+j] != BW[x][y]) {
                        BW_cnt++;
                    }
                }
            }
            result = min(WB_cnt, BW_cnt);

            if (min_num > result) {
                min_num = result;
            }
        }
    }

    cout << min_num;
}
//��� ����� ���� Ȯ���ϴ� �˰������� Ǯ �� �ִ� ����