import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int number = 666;
        int cnt = 1;
        int N = Integer.parseInt(br.readLine());

        while (cnt != N) {
            number++;
            if (String.valueOf(number).contains("666"))
                cnt++;
        }

        System.out.println(number);
    }
}
