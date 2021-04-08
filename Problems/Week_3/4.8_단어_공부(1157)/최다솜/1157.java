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
        int[] arr = new int[26];

        // 연산
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) < 91) {
                for (int k = 65; k < 91; k++) {
                    if (k == str.charAt(i)) {
                        arr[k - 65]++;
                        break;
                    }
                }
            }
            else {
                for (int k = 97; k < 123; k++) {
                    if (k == str.charAt(i)) {
                        arr[k - 97]++;
                        break;
                    }
                }
            }
        }

        int largestNum = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] > largestNum) {
                largestNum = arr[i];
            }
        }

        // 출력
        int answerCount = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] == largestNum) {
                answerCount++;
            }
            if (answerCount > 1) {
                System.out.println("?");
                return;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] == largestNum) {
                System.out.println((char) (i + 65));
                break;
            }
        }

        br.close();
    }
}