#include <iostream>
using namespace std;

int main() {
    int t, n;
    int hap[12] = {0, }; //각 숫자를 1,2,3의 합으로 나타낼 수 있는 방법의 수
    hap[1] = 1; //1
    hap[2] = 2; //1+1, 2
    hap[3] = 4; //1+1+1, 1+2, 2+1, 3

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        
        for (int j = 4; j < n + 1; j++) {
            hap[j] = hap[j-1] + hap[j-2] + hap[j-3]; //점화식
        }
        
        cout << hap[n] << "\n";
    }

    return 0;
}