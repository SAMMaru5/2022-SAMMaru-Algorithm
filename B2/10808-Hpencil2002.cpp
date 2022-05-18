#include <iostream>
#include <string>
using namespace std;

struct Voca{
    string arr; //입력받은 단어를 저장할 문자열
    int count[26]; //a~z의 개수를 저장할 배열
};

int main() {
    Voca voc;
    for (int i = 0; i < 26; i++) {
        voc.count[i] = 0; //a~z까지의 개수를 0으로 초기화
    }

    getline(cin, voc.arr); //문자열 입력
    int len = voc.arr.size(); //입력받은 문자열의 길이를 저장하는 변수

    for (int i = 0; i < len; i++) { //문자열의 길이만큼 반복
        switch (voc.arr[i]) { //switch문으로 문자열의 각 문자를 구분해서 그 문자의 개수를 1 증가
            case 'a':
                voc.count[0] += 1;
                break;
            case 'b':
                voc.count[1] += 1;
                break;
            case 'c':
                voc.count[2] += 1;
                break;
            case 'd':
                voc.count[3] += 1;
                break;
            case 'e':
                voc.count[4] += 1;
                break;
            case 'f':
                voc.count[5] += 1;
                break;
            case 'g':
                voc.count[6] += 1;
                break;
            case 'h':
                voc.count[7] += 1;
                break;
            case 'i':
                voc.count[8] += 1;
                break;
            case 'j':
                voc.count[9] += 1;
                break;
            case 'k':
                voc.count[10] += 1;
                break;
            case 'l':
                voc.count[11] += 1;
                break;
            case 'm':
                voc.count[12] += 1;
                break;
            case 'n':
                voc.count[13] += 1;
                break;
            case 'o':
                voc.count[14] += 1;
                break;
            case 'p':
                voc.count[15] += 1;
                break;
            case 'q':
                voc.count[16] += 1;
                break;
            case 'r':
                voc.count[17] += 1;
                break;
            case 's':
                voc.count[18] += 1;
                break;
            case 't':
                voc.count[19] += 1;
                break;
            case 'u':
                voc.count[20] += 1;
                break;
            case 'v':
                voc.count[21] += 1;
                break;
            case 'w':
                voc.count[22] += 1;
                break;
            case 'x':
                voc.count[23] += 1;
                break;
            case 'y':
                voc.count[24] += 1;
                break;
            case 'z':
                voc.count[25] += 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << voc.count[i] << " "; //a~z까지 개수 출력
    }

    return 0;
}