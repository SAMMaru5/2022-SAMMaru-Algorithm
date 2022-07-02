import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        for (int i = 0; i < T; i++) {
            String input = br.readLine();
            stackFunc(input);
        }
    }

    public static void stackFunc(String input) {
        Stack<Character> stack = new Stack<>();
        for (int j = 0; j < input.length(); j++) {
            stack.push(input.charAt(j));
        }

        boolean isNotYes = false;
        int leftCnt = 0;    // ( 개수
        int rightCnt = 0;   // ) 개수

        while (!stack.isEmpty()) {
            if (stack.pop() == ')') {
                rightCnt++;
            } else {
                if (rightCnt > 0) {
                    rightCnt--;
                } else {   //rightCnt==0  -> '('기호와 매칭되는 ')'기호 존재하지 않음
                    isNotYes = true;
                }
            }

        }
        if (rightCnt != 0) {
            isNotYes = true;
        }

        if (isNotYes)
            System.out.println("NO");
        else
            System.out.println("YES");
    }
}
