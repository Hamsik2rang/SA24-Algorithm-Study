/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());
        int fac = 1;

        for (int i = n; i > 1; i--) {
            fac *= i;
        }
        System.out.println(fac);

        br.close();
    }
}