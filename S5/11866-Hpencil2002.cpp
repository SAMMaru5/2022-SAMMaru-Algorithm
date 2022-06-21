#include <iostream>
#include <queue> //queue 라이브러리 사용
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> qu; //int형 데이터를 넣는 queue 선언
    int n, k; //전체 인원과 몇 번째 인원을 제거할지 정하는 변수
    cin >> n >> k;

    for (int i = 1; i < n + 1; i++) {
        qu.push(i); //1부터 n까지 숫자 queue에 push
    }

    cout << "<";
    int count = 1; //사람이 몇 번째에 있는지 확인하는 변수

    while (!qu.empty()) { //queue가 빌때까지 반복
        if (count % k == 0) { //count가 k의 배수이면 -> 제거할 사람이면
            int ans = qu.front(); //임시로 queue의 front값 저장
            qu.pop(); //사람 제거
            if (qu.empty()) { //만약 queue가 비었으면 방금 제거한 사람이 마지막 사람이었으므로
                cout << ans << ">"; //사람 번호 출력 후 괄호 닫음
            }
            else {
                cout << ans << ", "; //queue가 비어있지 않으면 사람 번호 출력 후 쉼표 출력
            }
        }
        else { //count가 k의 배수가 아니면 -> 제거할 사람이 아니면
            int tmp = qu.front(); //임시로 queue의 front값 저장
            qu.pop(); //queue에서 pop
            qu.push(tmp); //pop한 사람을 제일 뒤에 push
        }

        count++; //사람 count 증가
    }

    return 0;
}