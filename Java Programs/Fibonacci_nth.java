import java.util.*;

class Fibonacci_nth{  
public static void main(String[] args)  
{  
    Scanner sc = new Scanner(System.in);
    System.out.println("Please Enter a number:");
    int n = sc.nextInt();
    int first = 0;
    int second = 1; 
    int next = 0; // support variable to find next term in fibonacci series
    for(int i = 2; i < n ;i++)  
    {    
    next = first + second;        
    first = second;    
    second = next;    
    }    
  System.out.println("nth Fibonacci number is :" + next);
}
}  
