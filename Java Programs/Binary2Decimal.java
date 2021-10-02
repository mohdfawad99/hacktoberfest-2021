import java.util.*;
public class Binary2Decimal
{
    public static void main(String Args[])
    {
        Scanner ob = new Scanner(System.in);
        int n= ob.nextInt();
        int x=n;
        int s=0;
        int c=0;
        while(x!=0)
        {
            int a=x%10;
            int temp=(int)Math.pow(2,c);
            s=s+ (a*temp);
            x=x/10;
            c++;
        }
        
        System.out.println(s);
    }
}
