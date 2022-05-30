import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] size[] = new int[N][2];
        int[] rankingArr = new int[N];

        // 입력
        for (int i = 0; i < N; i++) {
            String input = br.readLine();
            StringTokenizer st = new StringTokenizer(input);

            size[i][0] = Integer.parseInt(st.nextToken());
            size[i][1] = Integer.parseInt(st.nextToken());
        }

        // 덩치 등수
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            for (int j = 0; j < N; j++) {
                // 상대방의 덩치가 더 큰 경우
                if (size[i][0] < size[j][0] && size[i][1] < size[j][1])
                    cnt++;
            }
            rankingArr[i] = cnt + 1;
        }

        // 출력
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < N; i++)
            result.append(rankingArr[i]).append(" ");
        System.out.println(result);
    }
}
