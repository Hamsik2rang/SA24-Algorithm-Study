/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int input = Integer.parseInt(br.readLine());
        int[] d = new int[input + 1];

        d[0] = 0;
        d[1] = 1;
        if (input >= 2) {
            d[2] = 2;
        }

        for (int i = 3; i <= input; i++) {
            d[i] = (d[i - 1] + d[i - 2]) % 10007;
        }

        System.out.println(d[input]);


        br.close();
    }
}