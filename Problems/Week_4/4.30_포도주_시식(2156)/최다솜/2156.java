/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] amount = new int[n + 1];
        int[] d = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            amount[i] = Integer.parseInt(br.readLine());
        }

        d[0] = 0;
        d[1] = amount[1];
        if (n >= 2) {
            d[2] = amount[1] + amount[2];
        }

        for (int i = 3; i <= n; i++) {
            d[i] = Math.max(d[i - 1], Math.max(d[i - 2] + amount[i], d[i - 3] + amount[i - 1] + amount[i]));
        }

        System.out.println(d[n]);

        br.close();
    }
}