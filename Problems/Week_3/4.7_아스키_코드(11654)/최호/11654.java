import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Character;

public class ASCII {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        char alpa = br.readLine().charAt(0);
        int ascii = (int)alpa;

        System.out.println(ascii);
    }
}
