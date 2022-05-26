// BufferedReader 입력 방식 + stream 풀이 방식
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class BOJ_10818 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());   // 정수의 개수 입력

        // String으로 입력받은 것을 split method를 사용하고 정렬 method를 사용하여 int 배열의 값으로 저장함
        int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).sorted().toArray();

        int min = arr[0];
        int max = arr[N - 1];

        System.out.printf("%d %d", min, max);
    }
}


//// Scanner 풀이 방식
//import java.util.Arrays;
//import java.util.Scanner;
//
//public class BOJ_10818 {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int N = sc.nextInt();   // 정수의 개수 입력
//
//        int[] arr = new int[N];
//        for (int i = 0; i < N; i++) {
//            arr[i] = sc.nextInt();    // N개 만큼 숫자 입력받기
//        }
//
//        Arrays.sort(arr); // 오름차순 정렬
//        int min = arr[0];
//        int max = arr[N - 1];
//
//        System.out.printf("%d %d", min, max);
//    }
//}