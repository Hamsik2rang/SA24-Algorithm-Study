/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        //StringBuilder sb = new StringBuilder();

        int[] result = new int[10];
        st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int b = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int c = Integer.parseInt(st.nextToken());
        String mul = Integer.toString(a * b * c);

        for (int i = 0; i < mul.length(); i++) {
            for (int j = 0; j < result.length; j++) {
                if (mul.charAt(i) - 48 == j) {
                    result[j]++;
                    break;
                }
            }
        }

        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }

        //System.out.println(sb);
        br.close();
    }
}