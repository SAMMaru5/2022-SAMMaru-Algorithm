#include <iostream>
using namespace std;

int main() { //터렛이 있을 수 있는 곳은 조규현과 백승환의 위치를 중심으로 하고, 두 명이 계산한 터렛과의 거리를 반지름으로 하는 두 원의 교점과 같음
    int x1, y1, x2, y2, r1, r2; //조규현 좌표, 백승환 좌표, 조규현이 계산한 거리, 백승환이 계산한 거리
    int d, d1, d2; //조규현과 백승환 사이 거리
    int t; //테스트 개수
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        d1 = (r1 -  r2) * (r1 - r2);
        d2 = (r1 + r2) * (r1 + r2);

        if (d == 0) { //조규현과 백승환이 같은 지점에 있음
            if (d1 == 0) { //반지름이 같음
                cout << "-1\n"; //터렛이 있을 수 있는 곳이 무수히 많음
            }
            else { //반지름이 다름 -> 터렛 존재 X
                cout << "0\n";
            }
        }
        else if (d == d1 || d == d2) { //두 사람의 거리가 반지름과 같음
            cout << "1\n"; //접점에 터렛 존재
        }
        else if (d1 < d && d < d2) { //두 원이 두 점에서 만남
            cout << "2\n";
        }
        else { //두 원이 만나지 않음
            cout << "0\n";
        }
    }

    return 0;
}