#include <iostream>
using namespace std;

int main() {
    int n, m; //카드 개수, 목표 수
    cin >> n >> m;

    int *card; //바닥의 숫자들
    card = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    int ans = 0; //비교할 수 -> 임시로 0 할당

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int tmp = card[i] + card[j] + card[k]; //card의 숫자 3개 선택
                if (tmp > ans && tmp <= m) { //선택된 숫자들의 합이 ans보다 크고 m보다 작거나 같으면
                    ans = tmp; //ans를 선택된 숫자들의 합으로 변경
                }
            }
        }
    } //카드의 모든 숫자들을 비교할때까지 반복

    cout << ans; //m에 가장 가까운 3장의 합 출력

    return 0;
}