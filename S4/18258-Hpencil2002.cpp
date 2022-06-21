#include <iostream>
#include <string>
#include <queue> //queue 라이브러리 사용
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> qu; //int형 데이터를 저장하는 queue 선언
    int n, num;
    string order; //명령을 저장하는 string
    cin >> n; //출력해야할 명령의 수 입력

    for (int i = 0; i < n; i++) { //명령의 수 만큼 반복
        cin >> order; //명령 입력
        if (order == "push") { //명령이 push이면
            cin >> num; //queue에 push할 숫자 입력
            qu.push(num); //push
        }
        else if (order == "pop") { //명령이 pop이면
            if (qu.empty()) { //queue가 비어있으면
                cout << "-1\n"; //-1 출력
            }
            else {
                cout << qu.front() << "\n"; //queue의 front값 출력
                qu.pop(); //pop
            }
        }
        else if (order == "size") { //명령이 size이면
            cout << qu.size() << "\n"; //queue size 출력
        }
        else if (order == "empty") { //명령이 empty이면
            if (qu.empty()) { //비었는지 확인 후 비었으면 1, 아니면 0 출력
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if (order == "front") { //명령이 front이면
            if (qu.empty()) { //비었으면 -1 출력
                cout << "-1\n";
            }
            else {
                cout << qu.front() << "\n"; //queue front 출력
            }
        }
        else if (order == "back") { //명령이 back이면
            if (qu.empty()) { //비었으면 -1 출력
                cout << "-1\n";
            }
            else {
                cout << qu.back() << "\n"; //queue back 출력
            }
        }
    }

    return 0;
}