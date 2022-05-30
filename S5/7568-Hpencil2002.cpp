#include <iostream>
using namespace std;

struct People { //사람의 정보를 넣을 구조체
    int weight; //몸무게
    int height; //키
    int rank; //덩치 등수
};

int main() {
    int n;
    People *peo;

    cin >> n; //사람 수 입력
    peo = new People[n]; //사람 수만큼 동적할당
    cin.ignore(); //버퍼에 남아있는 값 제거

    for (int i = 0; i < n; i++) { //사람 수 만큼 반복
        peo[i].rank = 1; //덩치 등수를 1로 초기화
        cin >> peo[i].weight >> peo[i].height; //각 사람의 몸무게와 키 입력
    }

    //첫번째 사람부터 마지막 사람까지 모두 비교
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (peo[i].weight < peo[j].weight && peo[i].height < peo[j].height) { //만약 i번째 사람이 j번째 사람보다 몸무게도 크고 키도 크다면
                peo[i].rank += 1; //덩치등수 + 1
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << peo[i].rank << " "; //각 사람의 덩치등수 출력
    }

    delete[] peo; //동적할당 해제
    return 0;
}