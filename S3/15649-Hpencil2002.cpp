#include <iostream>
using namespace std;

#define MAX 9 //1 <= M <= N <= 8 이니까 최대를 9로 설정

int n, m;
int arr[MAX] = {0,}; //정렬된 순열을 담는 배열
bool visited[MAX] = {0, }; //이미 방문한 숫자인지 판별하는 배열

void dfs(int dep) {
    if (dep == m) { //깊이가 m이면 arr을 출력하고 dfs 종료
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i < n + 1; i++) { //1부터 n까지 탐색하는 반복문
        if (!visited[i]) { //방문하지 않은 숫자라면
            visited[i] = true; //방문했다고 표시
            arr[dep] = i; //현재 깊이의 arr을 i로 갱신
            dfs(dep + 1); //깊이 1 증가시켜 탐색
            visited[i] = false; //dfs 탈출하고 나면 그 숫자를 방문안한걸로 갱신
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0); //깊이가 0부터 시작하는 dfs 호출
}