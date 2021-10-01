import java.util.*;
public class largest_smallest
{
    public static void main (String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number of elements you want to store:");
        int n=in.nextInt();
        int[] array =new int[20];
        System.out.println("Enter the elements of the array");
        for(int k=0;k<n;k++)
        {
            array[k]=in.nextInt();
        }
        //Sorting of array
        int m, r;
        for(m=0;m<n;m++)
        {
            for(r=m+1;r<n;r++)
            {
                int temp=0;
                if(array[m]>array[r])
                {
                    temp=array[m];
                    array[m]=array[r];
                    array[r]=temp;
                }
            }
        }
        //printing largest two numbers.
        System.out.println("Smallest two numbers: ");
        for(int i=0 ; i<2 ;i++)
        {
            System.out.println(array[i]);
        }
        //printing smallest two number.
        System.out.println("Largest two numbers: ");
        for(int j=n-1 ; j>n-3 ;j--)
        {
            System.out.println(array[j]);
        }
    }
}
        