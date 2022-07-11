import java.io.*;
import java.util.*;

public class Main {
    static boolean[] check;
    static int[] ansArr;
    static int N, M;
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        check = new boolean[N + 1];
        ansArr = new int[M];

        dfs(0);
        System.out.print(sb);
    }

    private static void dfs(int index) {

        // 종료조건 => 재귀함수 종료시 출력 실행
        if (index == M) {
            for (int value : ansArr) {
                sb.append(value + " ");
            }
            sb.append("\n");
            return;
        }

        // 재귀 실행 => 모든 노드
        for (int i = 1; i <= N; i++) {
            if (check[i])       // 중복 검사 위해 방문여부확인
                continue;
            check[i] = true;    // 방문함
            ansArr[index] = i;
            dfs(index + 1);
            check[i] = false;   // 방문 안 함으로 변경
        }
    }
}