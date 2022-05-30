#include <iostream>
using namespace std;

char black_start[8][8] = { //첫번째가 검은색인 정답판
    'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};
char white_start[8][8] = { //첫번째가 흰색인 정답판
    'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};
char arr[51][51]; //입력받을 체스판

int wf(int x, int y); //첫번째가 흰색일때 다시 칠해야 하는 정사각형의 최소 개수를 구하는 함수
int bf(int x, int y); //첫번째가 검은색일때 다시 칠해야 하는 정사각형의 최소 개수를 구하는 함수

int main() {
    int n, m; //세로, 가로
    int result = 64; //다시 칠해야하는 정사각형은 최대 64개(체스판이 8X8이니까)

    cin >> n >> m; //체스판 크기 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; //입력받은 크기만큼 체스판 입력
        }
    }

    int t_w, t_b; //시작이 흰색일때와 검은색일 때 다시 칠해야하는 정사각형 개수
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            t_w = wf(i, j);
            t_b = bf(i, j);
            if (t_w < t_b) { //만약 시작이 흰색인 경우가 검은색인 경우보다 작다면
                result = (t_w < result) ? t_w : result; //원래 결과와 비교해 결정
            }
            else {
                result = (t_b < result) ? t_b : result;
            }
        }
    }
    cout << result; //결과 출력
    
    return 0;
}

int wf(int x, int y) {
    int result = 0; //바꿔야 되는 정사각형 개수를 0으로 설정
    //입력받은 체스판과 정답판을 비교해 바꿔야하는 정사각형 개수 결정
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[x + i][y + j] != white_start[i][j]) { //만약 정답판과 입력받은 체스판이 다르면
                result += 1; //다른 개수만큼 result를 1만큼 증가
            }
        }
    }
    return result;
}

int bf(int x, int y) { //wf()와 알고리즘 동일
    int result = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[x + i][y + j] != black_start[i][j]) {
                result += 1;
            }
        }
    }
    return result;
}