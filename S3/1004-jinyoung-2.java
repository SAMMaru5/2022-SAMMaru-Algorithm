import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        int T = Integer.parseInt(br.readLine());    // 테스트케이스 개수

        for (int i = 0; i < T; i++) {
            // 출발점과 도착점
            st = new StringTokenizer(br.readLine(), " ");
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());

            // 행성계의 개수 n
            int n = Integer.parseInt(br.readLine());

            // 각 테스트 케이스에 대해 어린 왕자가 거쳐야 할 최소의 행성계 진입/이탈 횟수
            int cnt = 0;

            // 행성계의 중점과 반지름
            for (int j = 0; j < n; j++) {
                st = new StringTokenizer(br.readLine(), " ");
                int cx = Integer.parseInt(st.nextToken());
                int cy = Integer.parseInt(st.nextToken());
                int r = Integer.parseInt(st.nextToken());

                // Case 1) 행성계 안에 출발점 & 행성계 밖에 도착점 => 무조건 이탈 최소 한 번 존재
                if (Math.pow(x1 - cx, 2) + Math.pow(y1 - cy, 2) < Math.pow(r, 2)) {
                    cnt++;
                }
                // Case 2) 행성계 밖에 출발점 & 행성계 안에 도착점 => 무조건 진입 최소 한 번 존재
                else if (Math.pow(x2 - cx, 2) + Math.pow(y2 - cy, 2) < Math.pow(r, 2)) {
                    cnt++;
                }
                // Case 3) 행성계 안에 출발점, 도착점 모두 존재 => 진입 및 이탈 최소 0번
                else if (Math.pow(x1 - cx, 2) + Math.pow(y1 - cy, 2) < Math.pow(r, 2) && Math.pow(x2 - cx, 2) + Math.pow(y2 - cy, 2) < Math.pow(r, 2)) {
                    continue;
                }
                // Case 4) 행성계 밖에 출발점, 도착점 모두 존재 => 진입 및 이탈 최소 0번
                else {
                    continue;
                }
            }
            sb.append(cnt).append("\n");
        }
        // 거쳐야 할 최소의 행성계 진입/이탈 횟수 출력
        System.out.print(sb);
    }
}