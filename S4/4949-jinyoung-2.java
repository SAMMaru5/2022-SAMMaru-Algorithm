import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        String input;
        while (!(input = br.readLine()).equals(".")) {
            Stack<Character> stack = new Stack<>();
            boolean isNo = false;

            for (int i = 0; i < input.length(); i++) {

                char c = input.charAt(i);
                if (c == '[' || c == '(') {
                    stack.push(c);
                } else if (c == ']') {
                    if (!stack.isEmpty()) {
                        if (stack.peek() == '[') {
                            // "짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다." 조건
                            stack.pop();
                        } else {
                            isNo = true;
                            break;
                        }
                    } else {
                        // else문이 없다는 의미는, "모든 오른쪽 괄호들은 자신과 짝을 이룰 수 있는 왼쪽 괄호가 존재한다." 조건을 배제한것임
                        // char c가 닫는 기호일 경우, 여는 기호가 이미 존재해야하는데 stack이 비어있다는 것은 오류이다.
                        isNo = true;
                        break;
                    }
                } else if (c == ')') {
                    if (!stack.isEmpty()) {
                        if (stack.peek() == '(') {
                            stack.pop();
                        } else {
                            isNo = true;
                            break;
                        }
                    } else {
                        isNo = true;
                        break;
                    }
                }
            }
            if (stack.isEmpty() && !isNo)
                sb.append("yes\n");
            else
                sb.append("no\n");
        }
        System.out.print(sb);
    }
}
