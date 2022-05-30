#include <iostream>
using namespace std;

int main() {
    int num; //자연수 N
    cin >> num;

    int ans, temp; //생성자를 찾기 위한 변수

    for (int i = 1; i < num; i++) {
        //ans와 temp를 i로 초기화시킴
        ans = i;
        temp = i;

        while (temp) { //temp가 0이 아닌 동안 반복
            ans += temp % 10; //temp 숫자의 각 자리 수를 ans에 더함
            temp /= 10; //temp의 자리수 변경
        }

        if (ans == num) { //만약 ans와 num이 같으면 i는 num의 생성자
            cout << i << endl;
            return 0; //가장 작은 생성자를 찾았으므로 프로그램을 종료시킴
        }
    }

    cout << "0" << endl; //생성자가 없으면 0 출력

    return 0;
}