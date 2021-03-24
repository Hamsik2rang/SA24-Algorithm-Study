/* to solve BaekJoon */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Bronze {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        st = new StringTokenizer(br.readLine());

        int hour = Integer.parseInt(st.nextToken());
        int minute = Integer.parseInt(st.nextToken());

        minute += hour * 60;
        if (minute < 45) {
            minute += 60 * 24;
        }

        minute = minute - 45;
        hour = minute / 60;
        minute = minute % 60;

        System.out.println(hour + " " + minute);
        System.out.println(sb);
        br.close();
    }
}