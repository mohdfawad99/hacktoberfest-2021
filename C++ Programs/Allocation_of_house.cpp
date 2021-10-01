#include<iostream>
using namespace std;

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;

   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];

   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;

   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {
      array[k] = rarr[j];
      j++; k++;
   }
}

void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

int check_for_houses(int *array,int n,int limit)
{
    mergeSort(array,0,n-1);
    int count=0,term=0;
    for(int i=0;i<n;i++)
    {
        term=term+array[i];
        if(term<=limit)
        {
            count++;
        }
        else
        break;
    }
    return count;
}


int main()
{
    int t;
    cin>>t;
    int j=0;
    while(t--)
    {
        j++;
        int array[100];
        int n,limit;
        cin>>n>>limit;

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        cout<<"Case #"<<j<<": "<<check_for_houses(array,n,limit)<<endl;
    }

}
