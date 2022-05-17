#include <iostream>
#include <string>
using namespace std;

struct arr {
    int mul; //세 자연수를 곱한 값을 저장받을 변수
    int freq[10]; //0~9까지의 빈도수를 저장할 배열
};

int main() {
    arr arr1;
    for (int i = 0; i < 10; i++) {
        arr1.freq[i] = 0; //각 숫자의 빈도수를 0으로 초기화
    }

    int a, b, c; //자연수 3개
    cin >> a >> b >> c; //자연수 입력
    arr1.mul = a * b * c; //자연수 3개의 곱 저장

    string temp = to_string(arr1.mul); //arr1.mul을 문자열로 변환
    int len = temp.size(); //temp 길이 저장

    for (int i = 0; i < len; i++) { //temp 길이만큼 반복
        switch(temp[i]) { //switch문으로 문자열의 각 숫자를 구분해서 그 숫자의 빈도수를 1 증가
            case '0':
                arr1.freq[0] += 1;
                break;
            case '1':
                arr1.freq[1] += 1;
                break;
            case '2':
                arr1.freq[2] += 1;
                break;
            case '3':
                arr1.freq[3] += 1;
                break;
            case '4':
                arr1.freq[4] += 1;
                break;
            case '5':
                arr1.freq[5] += 1;
                break;
            case '6':
                arr1.freq[6] += 1;
                break;
            case '7':
                arr1.freq[7] += 1;
                break;
            case '8':
                arr1.freq[8] += 1;
                break;
            case '9':
                arr1.freq[9] += 1;
                break;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr1.freq[i] << "\n"; //각 숫자 빈도수 한 줄에 하나씩 출력
    }

    return 0;
}