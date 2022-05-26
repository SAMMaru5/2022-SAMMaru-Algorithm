

// BufferedReader 입력방식 풀이 => 3가지방법 중 메모리 및 시간 효율성 good
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_10808 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();     // 정답을 저장할 문자열 생성
        int[] alphaCnt = new int[26];
        String input = br.readLine();

        for (int i = 0; i < input.length(); i++) {
            alphaCnt[input.charAt(i) - 97]++;   // 소문자 a 아스키코드 : 97
        }

        for (int i = 0; i < 26; i++) {
            sb.append(alphaCnt[i]).append(" "); // chain 방식을 이용하여 정답 저장 문자열에 값들을 추가함
        }
        System.out.println(sb);
    }
}


//// BufferedReader 입력방식 풀이
//import java.io.BufferedReader;
//import java.io.IOException;
//import java.io.InputStreamReader;
//
//public class BOJ_10808 {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//
//        int[] alphaCnt = new int[26];
//        String input = br.readLine();
//
//        for (int i = 0; i < input.length(); i++) {
//            alphaCnt[input.charAt(i) - 97]++;   //소문자 a 아스키코드 : 97
//        }
//
//        for (int i = 0; i < 26; i++) {
//            System.out.print(alphaCnt[i] + " ");
//        }
//        System.out.println();
//    }
//}


//// Scanner 입력방식 풀이
//import java.util.Scanner;
//
//public class BOJ_10808 {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        String S = sc.nextLine();
//
//        int[] alphaCnt = new int[26];
//        for (int i = 0; i < S.length(); i++) {
//            alphaCnt[S.charAt(i) - 97]++;   //소문자 a 아스키코드 : 97
//        }
//
//        for (int i = 0; i < 26; i++) {
//            System.out.print(alphaCnt[i] + " ");
//        }
//        System.out.println();
//    }
//}