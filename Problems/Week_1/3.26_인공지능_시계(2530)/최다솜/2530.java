/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        int requiredTime = Integer.parseInt(br.readLine());

        c += a * 60 * 60 + b * 60;
        c += requiredTime;

        c %= 60 * 60 * 24;
        a = c / (60 * 60);
        b = c % (60 * 60) / 60;
        c %= 60;

        System.out.println(a + " " + b + " " + c);

        br.close();
    }
}