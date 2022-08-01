import java.io.*;

public class Main {
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int K = HanoiFunc(N, 1, 2, 3, 0);  // 옮긴 횟수

        // 출력
        System.out.println(K);
        System.out.print(sb);
    }

    private static int HanoiFunc(int N, int start, int mid, int to, int cnt) throws IOException {
        cnt++;

        // 원판이 1개일 경우
        if (N == 1) {
            sb.append(start + " " + to + "\n");
            return cnt;
        }

        // 원판이 2개이 상일 경우
        cnt = HanoiFunc(N - 1, start, to, mid, cnt);
        sb.append(start + " " + to + "\n");

        cnt = HanoiFunc(N - 1, mid, start, to, cnt);
        return cnt;
    }
}
