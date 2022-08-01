#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int *term, *price; //기간, 금액
    int *temp; //비교용

    cin >> N;
    term = new int[N+1];
    price = new int[N+1];
    temp = new int[N+1];
    for (int i = 0; i < N; i++) { //기간과 금액 입력 및 비교용 변수 초기화
        cin >> term[i] >> price[i];
        temp[i] = 0;
    }

    int max_price = 0; //최대 가격 0으로 설정
    for (int i = 0; i < N+1; i++) {
        temp[i] = max(max_price, temp[i]);
        if (term[i] + i <= N) {
            temp[term[i] + i] = max(temp[term[i] + i], price[i] + temp[i]);
        }
        max_price = max(max_price, temp[i]);
    }
    cout << max_price;

    return 0;
}