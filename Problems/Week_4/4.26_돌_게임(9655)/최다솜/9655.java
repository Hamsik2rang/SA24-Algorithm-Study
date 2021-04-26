/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        StringTokenizer st;
        String result = "";

        // 입력
        int n = Integer.parseInt(br.readLine());

        // 연산
        if (n % 2 == 0) {
            result = "CY";
        }
        else {
            result = "SK";
        }

        // 출력
        System.out.print(result);

        br.close();
    }

}