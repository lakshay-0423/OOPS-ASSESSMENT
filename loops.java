public class loops{
    public static void main(String[] args) {
        for(int i=1; i<=10; i++){
            if(i==10){
                System.out.print(" "+i);
                break;
            }
            System.out.print(" "+i+",");
        }
    }
}

// print 1 to 10 using while loop
// public class loops{
//     public static void main(String[] args) {
//         int i=1;
//         while(i<=10){
//             System.out.println(i);
//             i++;
//         }
//     }
// }