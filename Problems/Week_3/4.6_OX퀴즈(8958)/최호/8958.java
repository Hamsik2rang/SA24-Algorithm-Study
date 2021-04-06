import java.io.*;
import java.util.*;

public class OXQuiz {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] OXarr;
        int score = 0;
        int n = Integer.parseInt(br.readLine());
        OXarr = new String[n];
        for(int i = 0; i < n; i++){
            OXarr[i] = br.readLine();
        }
        for(int i = 0; i < n; i++){
            score = 0;
            StringTokenizer stk = new StringTokenizer(OXarr[i],"X");
            while(stk.hasMoreTokens()){
                score += score(stk.nextToken());
            }
            System.out.println(score);
        }
    }
    public static int score(String s){
        int score = 0;
        for(int i = 1; i < s.length()+1; i++){
            score += i;
        }
        return score;
    }
}
