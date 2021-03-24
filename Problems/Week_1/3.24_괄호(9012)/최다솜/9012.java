/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int count = Integer.parseInt(br.readLine());
        for (int i = 0; i < count; i++) {
            String str = br.readLine();
            char[] stack = new char[50];
            int index = 0;
            boolean flag = true;
            for (int j = 0; j < str.length(); j++) {

                char c = str.charAt(j);

                if (c == '(') {
                    stack[index++] = '(';
                }

                else if (c == ')') {
                    if (index != 0 && stack[index - 1] == '(') {
                        index--;
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
            }
            if (index == 0 && flag) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}