#include <iostream>
#include <string>
#include <stack> //STL stack 라이브러리
using namespace std;

int main() {
    int n; //입력할 데이터 개수
    cin >> n;

    while (n > 0) { //데이터 개수만큼 반복
        n--; //데이터 개수 하나씩 줄이면서 검사
        string input; //검사할 데이터
        cin >> input;

        stack<char> st; //char형 데이터를 넣을 stack
        string answer = "YES"; //기본적으로 답을 yes로 가정

        for (int i = 0; i < input.length(); i++) { //데이터 길이만큼 반복
            if (input[i] == '(') { //데이터가 '('이면
                st.push(input[i]); //스택에 데이터 push
            }
            else if (!st.empty() && input[i] == ')' && st.top() == '(') { //스택이 비어있지 않고, 데이터가 ')'이며 스택의 top이 '('이면
                st.pop(); //pop
            }
            else { //조건에 맞지 않으면
                answer = "NO"; //답을 no로 변경
                break; //반복문 탈출 (조건이 맞지 않으므로 뒤의 데이터는 검사할 필요 없음)
            }
        }

        if (!st.empty()) { //반복문이 끝났는데 스택이 비어있지 않으면 VPS가 아님
            answer = "NO"; //답을 no로 변경
        }

        cout << answer << "\n"; //데이터를 검사한 답을 출력
    }

    return 0;
}