import java.util.Scanner;
 
public class BestSolution {
 
	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
        
		for(int i = 0; i <= n; i++) {
			String s = in.nextLine();
			if (s.length() > 10) 
				System.out.println(s.charAt(0) + "" + (s.length() - 2) + "" + s.charAt(s.length() - 1));
			else
				System.out.println(s);
		}
		in.close();
	}
 
}