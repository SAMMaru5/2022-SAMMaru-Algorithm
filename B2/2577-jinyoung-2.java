import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_2577 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int A = Integer.parseInt(br.readLine());
        int B = Integer.parseInt(br.readLine());
        int C = Integer.parseInt(br.readLine());

        int result = A * B * C;
        int[] cntArr = new int[10];

        while ((result / 10) != 0) {
            int x = result % 10;
            cntArr[x]++;

            result /= 10;
        }
        cntArr[result]++;

        // A × B × C의 결과에 0~9가 각각 몇 번 쓰였는지 출력
        for (int i = 0; i < 10; i++) {
            System.out.println(cntArr[i]);
        }
    }
}