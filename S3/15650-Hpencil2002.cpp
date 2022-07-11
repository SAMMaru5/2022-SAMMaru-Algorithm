#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int>arr; //1부터 n까지 숫자를 담을 vector
vector<bool>index; //선택된 숫자의 위치 기억

int main() {
    cin >> n >> m;

    for (int i = 1; i < n + 1; i++) {
        arr.push_back(i); //1부터 n까지 숫자 차례대로 저장
    }

    for (int i = 0; i < n; i++) {
        if (i < m) {
            index.push_back(true); //m까지 true
        }
        else {
            index.push_back(false); //나머지는 false
        }
    }

    do {
        for (int i = 0; i < arr.size(); i++) {
            if (index[i]) {
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
    } while (prev_permutation(index.begin(), index.end())); //index의 조합이 존재할때까지 반복
    //prev_permutation -> 선택된 인덱스를 true로, 아닌 인덱스를 false로 반환
    return 0;
}