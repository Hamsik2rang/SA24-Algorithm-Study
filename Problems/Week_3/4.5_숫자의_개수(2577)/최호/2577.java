import java.util.Scanner;

public class 2577 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();

		int result = a*b*c;

		int[] number = new int[10];

		while(result != 0) {
			number[result % 10] += 1;
			result /= 10;
		}

		for(int i = 0; i < 10; i++) {
			System.out.println(number[i]);
		}
		sc.close();

	}
}
