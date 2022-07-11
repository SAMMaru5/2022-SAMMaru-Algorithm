import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int W = Integer.parseInt(st.nextToken());   // width
        int H = Integer.parseInt(st.nextToken());   // height
        int X = Integer.parseInt(st.nextToken());   // 시작 X좌표
        int Y = Integer.parseInt(st.nextToken());   // 시작 Y좌표
        int P = Integer.parseInt(st.nextToken());   // 선수의 수
        int radius = H / 2;
        int cnt = 0;    // 링크 안에 있는 선수의 수

        // 각 선수들의 x좌표, y좌표
        for (int i = 0; i < P; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            // check할 좌표들
            int pX = Integer.parseInt(st.nextToken());
            int pY = Integer.parseInt(st.nextToken());

            boolean isInLink = false;
            // 원 1 내부
            if (Math.pow(pX - X, 2) + Math.pow(pY - (Y + radius), 2) <= Math.pow(radius, 2)) {
                isInLink = true;
                cnt++;
                continue;
            }

            // 원 2 내부
            if (Math.pow(pX - (X + W), 2) + Math.pow(pY - (Y + radius), 2) <= Math.pow(radius, 2)) {
                isInLink = true;
                cnt++;
                continue;
            }

            // 직사각형 내부
            if (X <= pX && pX <= X + W && Y <= pY && pY <= Y + H) {
                isInLink = true;
                cnt++;
                continue;
            }
        }
        // 링크 안에 있는 선수의 수 출력
        System.out.println(cnt);
    }
}
