import java.io.*;
import java.util.*;

public class Main {
    static int[] ansArr;
    static int N, M;
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
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
        /**
         * 문제 조건: 1~N까지 M개 고른 수열로 같은 수를 중복해서 선택할 수 있다
         * So, 방문 여부 확인이 불필요하다
         * */
        for (int i = 1; i <= N; i++) {
            ansArr[index] = i;
            dfs(index + 1);
        }
    }
}