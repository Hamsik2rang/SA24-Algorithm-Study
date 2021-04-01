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
        int m = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());

        int beginNum = 0;
        int sum = 0;
        for (int i = 1; i * i < m; i++) {
            beginNum++;
        }
        beginNum++;

        for (int i = beginNum; i * i <= n; i++) {
            sum += i * i;
        }

        if (sum == 0) {
            System.out.println(-1);
        }
        else {
            System.out.println(sum);
            System.out.println(beginNum * beginNum);
        }

        br.close();
    }
}