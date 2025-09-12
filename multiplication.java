import java.util.Scanner;
public class multiplication{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num=sc.nextInt();
        if(num<=0){
            System.out.println("Please enter a natural number.");
            return;
        }
        for(int i=1; i<=10; i++){
            System.out.println(num+" x "+i+" = "+(num*i));
        }
        sc.close();
    }
}