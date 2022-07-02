#include <iostream>
using namespace std;

int main() {
    int t, n; //테스트 수, 행성 수
    int x1, y1, x2, y2, cx, cy, r, d1, d2; //출발지 좌표, 도착지 좌표, 행성 중심의 좌표, 행성 반지름, 출발지와 행성의 거리, 도착지와 행성의 거리
    int in, out; //행성계를 들어가고 나간 수

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;

        in = 0;
        out = 0; //들어가고 나간 수 0으로 초기화
        while (n--) {
            cin >> cx >> cy >> r;

            d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);

            if (d1 < r * r) { //출발지가 행성계 안에 있고
                if (d2 > r * r) { //도착지가 행성계 밖에 있음
                    out += 1; //나간 수 1 증가
                }
            }
            if (d1 > r * r) { //출발지가 행성계 밖에 있고
                if (d2 < r * r) { //도착지가 행성계 안에 있음
                    in += 1; //들어간 수 1 증가
                }
            }
        }

        cout << in + out << "\n"; //들어가고 나간 수 더해서 출력
    }

    return 0;
}