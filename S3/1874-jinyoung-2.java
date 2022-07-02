import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder(); //출력 문자열
        int n = Integer.parseInt(br.readLine());    //수열

        // 수열 입력받기
        int[] progression = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            progression[i] = Integer.parseInt(br.readLine());
        }

        // main logic
        Stack<Integer> stack = new Stack<>();

        // 수열 현재 index를 나타내는 변수
        // 0으로 초기화시 문제 발생 (이유: 나의 풀이는 인덱스 1부터 시작하는 것으로 설정함)
        int curProIdx = 1;

        for (int i = 1; i <= n; i++) {
            stack.push(i);
            sb.append("+\n");

            while (!stack.isEmpty()) {
                if (stack.peek() == progression[curProIdx]) {
                    stack.pop();
                    sb.append("-\n");
                    curProIdx++;
                } else {
                    break;
                }
            }
        }

        if (stack.isEmpty())
            System.out.print(sb);
        else
            System.out.println("NO");   // 오류 처리
    }
}