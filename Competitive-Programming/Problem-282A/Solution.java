import java.util.Scanner;
 
public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
 
        int commands = scan.nextInt();
 
        int result = 0;
 
        for (int i = 0; i < commands; i++) {
            String orden = scan.next();
 
            if(orden.contains("+")){
                result++;
            }else{
                result--;
            }
 
        }
 
        scan.close();
 
        System.out.println(result);
    }
}