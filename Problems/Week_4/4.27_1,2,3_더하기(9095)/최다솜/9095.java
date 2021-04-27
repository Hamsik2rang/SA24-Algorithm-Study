/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] d = new int[12];
        d[1] = 1;
        d[2] = 2;
        d[3] = 4;

        for (int i = 4; i <= d.length - 1; i++) {
            d[i] = d[i - 1] + d[i - 2] + d[i - 3];
        }

        int t = Integer.parseInt(br.readLine());
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            System.out.println(d[n]);
        }

        br.close();
    }
}