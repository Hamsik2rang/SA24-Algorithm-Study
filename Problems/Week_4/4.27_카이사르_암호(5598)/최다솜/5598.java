/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        // 입력
        String str = br.readLine();

        // 연산
        for (int i = 0; i < str.length(); i++) {

            char c = str.charAt(i);

            if (c <= 'C') {
                c += 23;
            }
            else {
                c -= 3;
            }

            System.out.print(c);
        }

        br.close();
    }
}