#include <iostream>
using namespace std;

int main() {
    int n; //정수 개수
    cin >> n; //정수 입력
    int *integer = new int[n]; //정수 개수만큼 동적할당

    for (int i = 0; i < n; i++) {
        cin >> integer[i]; //첫째 줄 정수만큼 정수 입력
    }

    int max = integer[0];
    int min = integer[0]; //최댓값, 최솟값을 임시로 integer[0]으로 지정
    for (int i = 0; i < n; i++) {
        if (integer[i] >= max) { //만약 integer[i]가 max보다 크면
            max = integer[i]; //max값을 integer[i]로 변경
        }
        if (integer[i] <= min) { //만약 integer[i]가 min보다 작으면
            min = integer[i]; //min값을 integer[i]로 변경
        }
    }

    cout << min << " " << max; //최솟값과 최댓값을 공백으로 구분해 출력
    delete[] integer; //동적할당 해제

    return 0;
}