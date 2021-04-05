/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();

        // 입력
        st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int[] nNumbers = new int[n];
        for (int i = 0; i < n; i++) {
            nNumbers[i] = Integer.parseInt(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        int m = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int[] mNumbers = new int[m];
        for (int i = 0; i < m; i++) {
            mNumbers[i] = Integer.parseInt(st.nextToken());
        }

        // 연산
        Arrays.sort(nNumbers);
        for (int i = 0; i < m; i++) {
            if (Arrays.binarySearch(nNumbers, mNumbers[i]) < 0) {
                System.out.print(0 + " ");
            }
            else {
                System.out.print(1 + " ");
            }
        }

        br.close();
    }
}