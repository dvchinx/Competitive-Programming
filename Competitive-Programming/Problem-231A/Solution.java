import java.util.Scanner;
 
public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
 
        int problems = scan.nextInt(); //2
        int solutions[][] = new int[problems][3]; //1 - 3, 2 - 3
 
        int contador = 0;
 
        for (int i = 0; i < problems; i++) {
            solutions[i][0] = scan.nextInt();
            solutions[i][1] = scan.nextInt();
            solutions[i][2] = scan.nextInt();
        }
 
        for (int i = 0; i < problems; i++) {
            if(solutions[i][0]+solutions[i][1]+solutions[i][2]>=2){
                contador++;
            }
        }
        scan.close();
        
        System.out.println(contador);
    }
}