// Java program to find the Kth Largest element in an array
/* 
EXAMPLE:
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
*/

import java.util.*;

class KthLargestElementInArray {
    public static int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        for(int i:nums)
        {
            minHeap.add(i);
            if(minHeap.size()>k)
                minHeap.poll();
        }
        return minHeap.peek();
    }
    public static void main(String[] args) {
        int[] nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
        int k = 4;
        int kthLargest = findKthLargest(nums,k);
        System.out.println("Kth Largest element in an array = " + kthLargest);
    }
}