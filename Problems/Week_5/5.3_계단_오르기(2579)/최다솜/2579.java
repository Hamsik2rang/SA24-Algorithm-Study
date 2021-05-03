/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());
        int[] stair = new int[n + 1];
        int[] d = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            stair[i] = Integer.parseInt(br.readLine());
        }

        d[1] = stair[1];
        if (n >= 2) {
            d[2] = stair[1] + stair[2];
        }

        for (int i = 3; i <= n; i++) {
            d[i] = Math.max(d[i - 3] + stair[i - 1] + stair[i], Math.max(d[i - 2] + stair[i], d[i - 3] + stair[i]));
        }

        System.out.println(d[n]);
        br.close();
    }

}