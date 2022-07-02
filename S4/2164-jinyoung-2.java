import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        Queue<Integer> queue = new LinkedList<>();
        for(int i=1;i<=N;i++){
            queue.offer(i);
        }

        int last = 0;
        // queue.size()==1인 경우와 queue.size()==2인 경우의 queue의 마지막 값을 구하는 단계는 다름
        // So, last 변수를 선언하여 각각의 경우의 마지막 값을 저장할 수 있도록 함.
        while(queue.size()!=0){

            // 1단계
            int pollFisrtValue = queue.poll();

            // 2단계
            if(!queue.isEmpty()){
                int pollSecondeValue = queue.poll();
                queue.offer(pollSecondeValue);
                last = pollSecondeValue;
            }else{
                last = pollFisrtValue;
                break;
            }
        }
        System.out.println(last);
    }
}