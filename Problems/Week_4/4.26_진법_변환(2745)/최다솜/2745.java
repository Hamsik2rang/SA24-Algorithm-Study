/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int result = 0;
        //StringBuilder sb = new StringBuilder();

        // 입력
        st = new StringTokenizer(br.readLine());
        String n = st.nextToken();
        int b = Integer.parseInt(st.nextToken());

        //st = new StringTokenizer(br.readLine());
        //int a = Integer.parseInt(st.nextToken());
        //int b = Integer.parseInt(br.readLine());

        // 연산
        for (int i = 0; i < n.length(); i++) {
            int number = n.charAt(n.length() - i - 1);
            if (number < 58) {
                result += Math.pow(b, i) * (number - 48);
            }
            else {
                result += Math.pow(b, i) * (number - 55);
            }
        }

        // 출력
        System.out.println(result);

        //System.out.println(sb);
        br.close();
    }
}