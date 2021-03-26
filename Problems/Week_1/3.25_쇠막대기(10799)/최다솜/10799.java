/* to solve BaekJoon Silver */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Silver {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        String str = br.readLine();
        Stack stack = new Stack();
        int piece=0;

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '(') {
                stack.push('(');
            }
            else if (str.charAt(i) == ')') {
                if (str.charAt(i - 1) == '(') {
                    stack.pop();
                    piece += stack.size();
                }
                else {
                    stack.pop();
                    piece++;
                }
            }
        }

        System.out.println(piece);

        System.out.println(sb);
        br.close();
    }
}