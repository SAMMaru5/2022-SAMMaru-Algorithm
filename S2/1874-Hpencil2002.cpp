#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n; //수열의 숫자 개수
    int *ans; //수열
    string answer; //+나 -를 저장할 string
    cin >> n;
    ans = new int[n]; //수열 동적할당

    for (int i = 0; i < n; i++) {
        cin >> ans[i]; //수열 입력
    }

    stack<int> st; //int형 데이터를 저장하는 스택
    int cnt = 0; //수열의 인덱스
    int next = 1; //stack에 넣을 값(기본적으로 1로 초기화)
    bool flag = 1; //수열을 전체 다 검색했는지 확인하는 flag

    while (flag) { //flag가 1인동안
        if (st.empty()) { //스택이 비었으면
            if (ans[cnt] < next) { //원하는 데이터가 next보다 작으면 수열 못만듦
                cout << "NO\n"; //NO 출력
                return 0; //프로그램 종료
            }
            st.push(next++); //그렇지 않으면 스택에 데이터 push하고 next 1 증가
            answer += "+"; //push 했으므로 answer에 + 추가
        }
        else if (ans[cnt] > st.top()) { //원하는 데이터가 스택의 top보다 크면 push해야함
            if (ans[cnt] < next) { //next보다 원하는 데이터가 작으면 수열 못만듦
                cout << "NO\n";
                return 0; //프로그램 종료
            }
            st.push(next++); //스택에 push하고 next 1 증가
            answer += "+"; //push 했으므로 answer에 + 추가
        }
        else if (ans[cnt] < st.top()) { //원하는 데이터가 스택의 top보다 작으면 pop하면서 숫자 찾아야함
            st.pop(); //pop
            answer += "-"; //pop했으므로 answer에 - 추가
        }
        else if (ans[cnt] == st.top()) { //원하는 데이터가 스택의 top과 같으면 cnt 증가하면서 다음 원소로 이동
            st.pop(); //pop
            answer += "-"; //pop했으므로 answer에 - 추가
            cnt++; //인덱스 증가
            if (cnt == n) { //인덱스가 n과 같다면 -> 수열을 전부 다 검사했으면
                flag = 0; //flag 0으로 변경 -> 반복문 종료
            }
        }
    }

    for (int i = 0; i < answer.length(); i++) {
        cout << answer[i] << "\n"; //answer 출력
    }

    return 0;
}