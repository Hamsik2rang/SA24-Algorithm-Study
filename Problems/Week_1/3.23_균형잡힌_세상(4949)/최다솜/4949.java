/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while (true) {
            String str = br.readLine();
            char[] stack = new char[100];
            int index = 0;
            boolean unison = true;
            if (str.length() == 1) {
                return;
            }
            for (int j = 0; j < str.length(); j++) {

                char c = str.charAt(j);

                if (c == '(') {
                    stack[index++] = '(';
                }

                else if (c == ')') {
                    unison = false;
                    if (index != 0 && stack[index - 1] == '(') {
                        index--;
                        unison = true;
                    }
                }

                else if (c == '[') {
                    stack[index++] = '[';
                }

                else if (c == ']') {
                    unison = false;
                    if (index != 0 && stack[index - 1] == '[') {
                        index--;
                        unison = true;
                    }
                }

                else if (c == '.') {
                    if (index == 0 && unison == true) {
                        System.out.println("yes");
                    }
                    else {
                        System.out.println("no");
                    }
                    break;
                }

                if (unison == false) {
                    System.out.println("no");
                    break;
                }
            }
        }
    }
}