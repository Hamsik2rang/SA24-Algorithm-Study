import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());
        int t[] = new int[n + 1];
        int p[] = new int[n + 1];
        int d[] = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            st = new StringTokenizer(br.readLine());
            t[i] = Integer.parseInt(st.nextToken());
            p[i] = Integer.parseInt(st.nextToken());
        }

        if (t[1] <= 1) {
            d[1] = p[1];
        }

        for (int i = 2; i <= n; i++) {
            int max_p = 0;
            // d[i] = max(d[i-1] + (if (t[i]==1) p[i]), d[i-2] + (if (t[i-1]==2) p[i-1]), ...)
            for (int k = i, j = 1; k >= 1; k--, j++) {
                int current_p = d[k - 1];
                if (t[k] == j) {
                    current_p += p[k];
                }
                if (current_p > max_p) {
                    max_p = current_p;
                }
            }
            d[i] = max_p;
        }

        System.out.println(d[n]);
        br.close();
    }

}