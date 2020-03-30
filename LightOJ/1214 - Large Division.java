
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Peal Mazumder
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       
        int t;
        t = sc.nextInt();
        for(int i = 1;i<=t;i++)
        {
            BigInteger a,b;
            
            a = sc.nextBigInteger();
            b = sc.nextBigInteger();
            a = a.abs();
            b = b.abs();
            BigInteger ans = a.mod(b);
            int res = ans.intValue();
            if (res == 0) {
                System.out.println("Case "+i+": divisible");
            }
            else {
                System.out.println("Case "+i+": not divisible");
            }
        }
    }
}
