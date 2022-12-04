import java.util.Scanner;
public class Java_Test {
    public static void main(String [] args){
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        String ans = "";
        int max = 1;
        int current = 1;
        for(int i = 0; i < str.length() - 1; i++){
            String a = str.substring(i, i + 1);
            String b = str.substring(i + 1, i + 2);
            if(a.equals(b)){
                current++;
            }
            else {
                current = 1;
            }
            if(current >= max){
                max = current;
                ans = b;
            }
        }
        System.out.println(ans + " is repeated " + max + " times");
        input.close();
    }
}