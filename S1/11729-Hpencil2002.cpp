//알고리즘 구현이 어려워서 https://cryptosalamander.tistory.com/39 참고했어요

#include <iostream>
using namespace std;

void hanoi(int n, int satrt, int to, int via); //원판 개수, 시작점, 도착점, 경유지

int main() {
    int n; //원판 개수
    cin >> n;

    cout << (1 << n) - 1 << "\n"; //이동한 횟수 출력
    hanoi(n, 1, 3, 2); //하노이탑 알고리즘 호출
    
    return 0;
}

void hanoi(int n, int start, int to, int via) {
    if (n == 1) {
        cout << start << " " << to << "\n";
    }
    else {
        hanoi(n-1, start, via, to);
        cout << start << " " << to << "\n";
        hanoi(n-1, via, to, start);
    }
}