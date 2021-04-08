import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class WordStudy {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ;
        String Word = br.readLine().toUpperCase();
        int max = 0;
        int index;
        int[] count = new int[26];
        char result = ' ';

        for(int i = 0; i < Word.length(); i++){
            index = Word.charAt(i)-65;
            count[index]++;

            if(max < count[index]){
                max = count[index];
                result = Word.charAt(i);
            }
            else if(max == count[index]){
                result = '?';
            }
        }
        System.out.println(result);

    }
}
