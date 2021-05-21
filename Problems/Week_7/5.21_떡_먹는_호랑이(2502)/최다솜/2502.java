/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int d = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int[] memo = new int[d + 1];
        for (int i = 1; i <= 50000; i++) {
            memo[1] = i;
            for (int j = i; j <= 100000 - i; j++) {
                memo[2] = j;
                for (int l = 3; l <= d; l++) {
                    memo[l] = memo[l - 1] + memo[l - 2];
                }
                if (memo[d] == k) {
                    System.out.println(memo[1]);
                    System.out.println(memo[2]);
                    return;
                }
            }
        }
        br.close();
    }
}