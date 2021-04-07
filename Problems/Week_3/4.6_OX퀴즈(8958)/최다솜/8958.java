import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int num = Integer.parseInt(br.readLine());
        for (int i = 0; i < num; i++) {
            String ox = br.readLine();
            int sum = 0;
            int runningSum = 0;
            for (int j = 0; j < ox.length(); j++) {
                if (ox.charAt(j) == 'X') {
                    runningSum = 0;
                    continue;
                }
                runningSum++;
                sum += runningSum;
            }
            System.out.println(sum);
        }

        br.close();
    }
}