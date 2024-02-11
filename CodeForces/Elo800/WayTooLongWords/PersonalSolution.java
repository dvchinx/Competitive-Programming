import java.util.Scanner;

public class TooLongWords {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        String word[] = new String[n];
        String newWord[] = new String[n];

        for (int i = 0; i < n; i++) {
            word[i] = scan.next();
        }

        for (int i = 0; i < n; i++) {

            if(word[i].length()>=11){
                //char a -> almacena primer caracter
                char a = word[i].charAt(0);
            
                //char b -> almacena ultimo caracter
                char b = word[i].charAt(word[i].length()-1);

                //int ammount -> almacena el tamaño de la palabra menos 2
                int ammount = word[i].length()-2;

                //newWord[i] -> almacena "a" + "ammount" + "b"
                newWord[i] = ""+a+ammount+b;
            }else{
                newWord[i] = word[i];
            }

        }

        scan.close();
        for (int i = 0; i < n; i++) {
            System.out.println(newWord[i]);
        }
    }
}
