#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans, count, tmp; //영화제목, 현재 몇번째 종말의 수인지 카운트하는 수, 비교를 위한 변수
    ans = 0;
    count = 0;

    while (count != n) { //count가 n과 같아질 때까지 반복
        ans += 1; //영화제목 1 증가
        tmp = ans; //임시로 영화제목과 같은 수 할당

        while (tmp != 0) { //tmp를 3자리씩 끊어서 끝까지 비교
            if (tmp % 1000 == 666) { //제일 끝자리 수 3개가 666이면
                count += 1; //종말의 수이므로 count 1 증가
                break; //안쪽 while문 탈출
            }
            else {
                tmp /= 10; //1의 자리 수 날리고 다시 비교
            }
        }
    }

    cout << ans; //바깥 while문을 탈출했으므로 ans는 n번째 종말의 수
}