import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        sb.append("<");

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        Queue<Integer> queue = new LinkedList<>();
        for (int i = 1; i <= N; i++) {
            queue.offer(i);
        }

        //N명의 사람이 모두 제거될 때까지 계속
        int cnt = 0; // K번째때의 값을 제거하기 위해 몇 번째 값인지 check하기 위해 사용하는 변수
        while (queue.size() != 1) {
            if (cnt == K - 1) {
                int x = queue.poll();
                sb.append(x + ", ");
                cnt = 0;
            } else {
                int x = queue.poll();
                queue.offer(x);
                cnt++;
            }
        }

        // queue에 오직 한 개의 값만 존재하는 경우
        sb.append(queue.poll() + ">");

        System.out.println(sb);
    }
}