
/**
* Contributor🎅
* Name: Ashutoshpandey-coder (Ashutosh pandey)
* Github: https://github.com/Ashutoshpandey-coder
*/

/**
 * 👉 Problem: Tower of Hanoi 👑 Description: Move all the disc from
 *  Tower A to Tower C. Explanation : We have to move all the disc from 
 * one tower A to another tower C using tower B as Auxilary tower.
 * Rules : 
 *   -> Only one disc can moves at a time.
 *   -> No larger disc above smaller disc.
 *   -> Only the top disc of a tower can be moved.
 * Input : We have given number of disc to be moved and name of Towers.
 * Output : We have to print the steps to be needed to move the disc 
 *          from Tower A to Tower C.
 * . Language Used Java
 */

/* Example : 
    Input : n = 2 and Tower name = A(from) , B(Aux), C(target)
    Output :
            Move Disc 1 from A to B.
            Move Disc 2 from A to C.
            Move Disc 1 from B to C.
 */
import java.util.*;

public class TowerOfHanoi{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Number of Disc to be moved : ");
        int noOfDisc = sc.nextInt();
        TOH(noOfDisc,'A','B','C');
        sc.close();
    }
    /*
     n -> Number of Disc to be moved.
     A -> Tower where initially disc are placed.
     B -> Auxilary Tower
     C-> Target Tower finally where disc to be moved.
    */
    static void TOH(int n, char A,char B, char C){
        if(n <= 0){
            System.out.println("n must be greater than 0!");
            return;
        }
        if(n == 1){
            System.out.println("Move Disc 1 from " + A + " to " + C);
            return;
        }
        TOH(n-1, A, C, B);
        System.out.println("Move Disc " + n + " from " + A + " to " + C);
        TOH(n-1,B,A,C);
    }
}

