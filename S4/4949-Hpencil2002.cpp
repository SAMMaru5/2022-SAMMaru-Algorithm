#include <iostream>
#include <string>
#include <stack> //STL stack 라이브러리
using namespace std;

int main() {
    while (1) { //무한반복
        string input; //검사할 문자열
        getline(cin, input); //문자열 입력

        if (input == ".") { //문자열이 '.'이면
            break; //프로그램 종료
        }

        stack<char> st; //char형 데이터를 저장하는 스택
        bool flag = 0; //스택의 상태를 보여주는 변수
        for (int i = 0; i < input.length(); i++) { //데이터의 길이만큼 반복
            char c = input[i]; //데이터를 하나씩 잘라서 검사

            if ((c == '(') || (c == '[')) { //데이터가 '('이거나 '['이면
                st.push(c); //스택에 push
            }
            else if (c == ')') { //데이터가 ')'일 때
                if (!st.empty() && st.top() == '(') { //스택이 비어있지 않고 top이 '('이면
                    st.pop(); //pop
                }
                else { //그렇지 않으면
                    flag = 1; //flag 변경
                    break; //검사 종료 (조건에 맞지 않으므로 뒤쪽은 검사할 필요 없음)
                }
            }
            else if (c == ']') { //데이터가 ']'일 때
                if (!st.empty() && st.top() == '[') { //스택이 비어있지 않고 top이 '['이면
                    st.pop(); //pop
                }
                else { //그렇지 않으면
                    flag = 1; //flag 변경
                    break; //검사 종료 (조건에 맞지 않으므로 뒤쪽은 검사할 필요 없음)
                }
            }
        }

        if (flag == 0 && st.empty()) { //flag가 1이고 스택이 다 비워졌으면
            cout << "yes\n"; //yes 출력
        }
        else { //flag가 0이거나 스택에 데이터가 남아있으면 조건에 맞지 않는다는 소리이므로
            cout << "no\n"; //no 출력
        }
    }

    return 0;
}