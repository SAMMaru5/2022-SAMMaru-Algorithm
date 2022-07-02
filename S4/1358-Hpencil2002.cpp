#include <iostream>
using namespace std;

int main() {
    int w, h, x, y, p, r; //직사각형 가로, 세로, 직사각형의 왼쪽 아래 모서리 좌표, 선수의 수, 반원 반지름
    cin >> w >> h >> x >> y >> p;
    int count = 0; //링크 안 또는 경계에 있는 선수의 수
    r = h / 2; //반지름 설정

    for (int i = 0; i < p; i++) {
        int x_p, y_p, d1, d2; //선수의 좌표, 왼쪽 반원과 오른쪽 반원의 중심과 선수와의 거리
        cin >> x_p >> y_p;

        d1 = (x - x_p) * (x - x_p) + ((y + r) - y_p) * ((y + r) - y_p);
        d2 = (x_p - (x + w)) * (x_p - (x + w)) + (y_p - (y + r)) * (y_p - (y + r));

        if (x_p < x && y_p < y + h) {
            if (d1 <= r * r) { //선수가 왼쪽 반지름에 있음
                count += 1;
            }
        }

        if (x_p >= x && x_p <= x + w && y_p >= y && y_p <= y + h) { //선수가 중앙 직사각형에 있음
            count += 1;
        }

        if (x_p > x + w && y_p < y + h) { //선수가 오른쪽 반지름에 있음
            if (d2 <= r * r) {
                count += 1;
            }
        }
    }

    cout << count << "\n"; //카운트 된 선수 출력

    return 0;
}