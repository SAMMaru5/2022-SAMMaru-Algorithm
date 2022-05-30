import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        boolean isSuccess = false;

        int i;
        for (i = 1; i <= N; i++) {
            int M = i;
            int result = M;
            while (M / 10 != 0) {
                result += M % 10;
                M /= 10;
            }
            result += M;
            if (result == N) {
                isSuccess = true;
                break;
            }
        }

        if (isSuccess)   // 생성자 있는 경우
            System.out.println(i);
        else    // 생성자 없는 경우
            System.out.println(0);
    }
}
