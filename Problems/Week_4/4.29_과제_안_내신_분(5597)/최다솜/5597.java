/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        Boolean[] numbers = new Boolean[31];

        for (int i = 1; i <= 30; i++) {
            numbers[i] = false;
        }

        for (int i = 1; i <= 28; i++) {
            int num = Integer.parseInt(br.readLine());
            numbers[num] = true;
        }

        for (int i = 1; i <= 30; i++) {
            if (numbers[i] == false) {
                System.out.println(i);
            }
        }

        br.close();
    }
}