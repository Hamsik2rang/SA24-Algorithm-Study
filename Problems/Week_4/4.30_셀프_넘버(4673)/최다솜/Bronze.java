/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        Boolean numbers[] = new Boolean[100001];
        for (int i = 1; i <= 10000; i++) {
            numbers[i] = true; // 우선 모든 i는 셀프 넘버라고 가정
        }

        for (int i = 1; i <= 10000; i++) {
            int current_num = i;

            while (true) {
                int add_num = 0;
                add_num += current_num % 10;
                if (current_num < 100) {
                    add_num += current_num / 10;
                }
                else if (current_num < 1000) {
                    add_num += current_num / 10 % 10;
                    add_num += current_num / 100;
                }
                else {
                    add_num += current_num / 10 % 10;
                    add_num += current_num / 100 % 10;
                    add_num += current_num / 1000;
                }
                current_num += add_num;
                if (current_num <= 10000) {
                    numbers[current_num] = false; // 이 경우는 생성자가 있는 것이므로 셀프 넘버가 아니게 됨
                }
                else {
                    break;
                }
            }
        }

        for (int i = 1; i <= 10000; i++) {
            if (numbers[i] == true) {
                System.out.println(i);
            }
        }

        br.close();
    }
}