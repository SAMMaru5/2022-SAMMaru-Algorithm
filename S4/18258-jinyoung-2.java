import java.io.*;
import java.util.*;

public class Main {
    static Deque<Integer> queue = new LinkedList<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int N = Integer.parseInt(br.readLine());

        StringTokenizer st;
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine()," ");
            String command = st.nextToken();

            if(command.equals("push")){
                int value = Integer.parseInt(st.nextToken());
                queue.offer(value);

            }else if(command.equals("pop")){
                if(queue.isEmpty())
                    sb.append(-1+"\n");
                else
                    sb.append(queue.poll()+"\n");
            }else if(command.equals("size")){
                sb.append(queue.size()+"\n");

            }else if(command.equals("empty")){
                if(queue.isEmpty())
                    sb.append(1+"\n");
                else
                    sb.append(0+"\n");
            }else if(command.equals("front")){
                if(queue.isEmpty())
                    sb.append(-1+"\n");
                else
                    sb.append(queue.getFirst()+"\n");
            }else if(command.equals("back")){
                if(queue.isEmpty())
                    sb.append(-1+"\n");
                else
                    sb.append(queue.getLast()+"\n");
            }
        }

        System.out.print(sb);
    }
}
