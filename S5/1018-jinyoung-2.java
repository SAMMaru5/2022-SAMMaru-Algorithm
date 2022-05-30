import java.io.*;
import java.util.StringTokenizer;

// 풀이: 올바른 8*8 체스판과 입력받은 체스판과 1:1 비교 통해 다시 칠할 정사각형 개수 찾기
public class Main {

    static char[] arr[];
    static char[] correctB[] = {    // 8*8 정사각형의 맨 왼쪽 위 칸이 검은색인 경우
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    };

    static char[] correctW[] = {    // 8*8 정사각형의 맨 왼쪽 위 칸이 흰색인 경우
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
            {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
            {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    };
    static int minB = 0;    // 맨 왼쪽 위 칸이 검은색인 경우의 다시 칠해야하는 정사각형의 최소 개수
    static int minW = 0;    // 맨 왼쪽 위 칸이 흰색인 경우의 다시 칠해야하는 정사각형의 최소 개수

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int N = Integer.parseInt(st.nextToken());   //행
        int M = Integer.parseInt(st.nextToken());   //열
        arr = new char[N][M];

        // 입력
        for (int i = 0; i < N; i++) {
            arr[i] = br.readLine().toCharArray();
        }

        int min = Integer.MAX_VALUE;

        // 8*8 case 찾기
        for (int i = 0; i < N - 7; i++) {      // case별 행의 시작위치
            for (int j = 0; j < M - 7; j++) {   // case별 열의 시작위치

                for (int r = 0; r < 8; r++) {   //행의 8칸
                    for (int c = 0; c < 8; c++) {   //열의 8칸
                        if (correctW[r][c] != arr[r + i][c + j])
                            minW++;
                        else if (correctB[r][c] != arr[r + i][c + j])
                            minB++;
                    }
                }

                min = Math.min(min, Math.min(minW, minB));
                minB = 0, minW = 0;
            }
        }
        System.out.println(min);
    }
}