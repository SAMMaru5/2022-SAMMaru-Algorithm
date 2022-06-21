#include <iostream>
#include <string>
#include <queue> //queue 라이브러리 사용
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> qu; //int형 데이터를 저장하는 queue 선언
    int n; //전체 카드 개수
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        qu.push(i); //1부터 n까지 숫자 queue에 push
    }

    while(qu.size() > 1) { //queue에 숫자가 하나 남을때까지 반복
        qu.pop(); //제일 위의 카드 제거
        int temp = qu.front(); //두 번째 카드 임시로 저장
        qu.pop(); //두 번째 카드 제거
        qu.push(temp); //임시로 저장한 카드 push
    }

    cout << qu.front() << "\n"; //마지막에 남은 카드 출력

    return 0;
}