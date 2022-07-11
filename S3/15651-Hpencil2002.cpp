#include <iostream>
using namespace std;

#define MAX 8 //1 <= M <= N <= 7 이니까 최대를 8로 설정

int n, m;
int arr[MAX]; //정렬된 순열을 담을 배열

void dfs(int dep) {
    if (dep == m) { //깊이가 m이면 arr 출력하고 dfs 종료
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i < n + 1; i++) {
        arr[dep] = i; //현재 깊이의 arr을 i로 갱신
        dfs(dep + 1); //깊이 1 증가시켜 탐색
    }
}

int main() {
    cin >> n >> m;
    dfs(0);
}