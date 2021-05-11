import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());
        int answer;
        int current_num = 7;

        if (n == 1) {
            answer = n;
        }
        else {
            answer = 2;
            for (int cnt = 2; n > current_num; cnt++) {
                current_num += cnt * 6;
                answer++;
            }
        }

        System.out.println(answer);
        br.close();
    }
}