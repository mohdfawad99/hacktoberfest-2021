import java.util.*;
import java.util.Collections;
 
class Bucketsort {
 
    // Function to sort arr[] of size n
    // using bucket sort
    static void bucketSort(float arr[], int n)
    {
        if (n <= 0)
            return;
 
        // 1) Create n empty buckets
        @SuppressWarnings("unchecked")
        Vector<Float>[] buckets = new Vector[n];
 
        for (int i = 0; i < n; i++) {
            buckets[i] = new Vector<Float>();
        }
 
        // 2) Put array elements in different buckets
        for (int i = 0; i < n; i++) {
            float idx = arr[i] * n;
            buckets[(int)idx].add(arr[i]);
        }
 
        // 3) Sort individual buckets
        for (int i = 0; i < n; i++) {
            Collections.sort(buckets[i]);
        }
 
        // 4) Concatenate all buckets into arr[]
        int index = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < buckets[i].size(); j++) {
                arr[index++] = buckets[i].get(j);
            }
        }
    }
 
    // Driver code
    public static void main(String args[])
    {
        float arr[] = { (float)0.678, (float)0.986,
                        (float)0.563, (float)0.1234,
                        (float)0.876, (float)0.2345 };
 
        int n = arr.length;
        bucketSort(arr, n);
 
        System.out.println("Sorted array is ");
        for (float el : arr) {
            System.out.print(el + " ");
        }
    }
}
