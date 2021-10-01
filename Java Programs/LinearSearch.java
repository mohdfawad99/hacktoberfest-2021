import java.util.Scanner;

class LinearSearch
{
    public static void main(String args[])
    {
        int i, n, ele, arr[];

        Scanner in = new Scanner(System.in);
        System.out.println("Enter number of elements");
        n = in.nextInt();
        arr = new int[n];

        System.out.println("Enter elements");

        for (i = 0; i < n; i++)
            arr[i] = in.nextInt();

        System.out.println("Enter value to find");
        ele = in.nextInt();

        for (i = 0; i < n; i++)
        {
            if (arr[i] == ele)     /* Searching element is present */
            {
                System.out.println(ele + " is found at index " + (i + 1));
                break;
            }
        }
        if (i == n)  /* Element to search isn't present */
            System.out.println(ele + "not found!");
    }
}