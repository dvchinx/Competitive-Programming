import java.util.Scanner;
 
public class Solution {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
 
        int n = scan.nextInt();
        int k = scan.nextInt();
 
        scan.close();
 
        for (int i = 0; i < k; i++) {
            if(n%10==0){
                n=n/10;
            }else{
                n--;
            }
        }
 
        System.out.println(n);
    }
}