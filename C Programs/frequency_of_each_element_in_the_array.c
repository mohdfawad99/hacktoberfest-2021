#include <stdio.h>
int main()
{
    int size,cont;
    printf("Enter the size of array \n");
    scanf("%d",&size);
    
   int arr[size],frq[size];
   printf("Enter the element \n");
   for(int i=0;i<size;i++){
       scanf("%d",&arr[i]);
       frq[i] =-1;
   } 
   for(int i =0; i<size;i++){
        cont =1;
       for(int j=i+1;j<size;j++){
          
           if(arr[i] == arr[j] ){
               cont++;
               frq[j] = 0;
           }
       }
       if(frq[i] != 0){
           frq[i] = cont;
       }
   }
   
   printf("the frequency is \n");
   for(int i=0;i<size;i++){
       if(frq[i] !=0){
       printf("%d  |  %d \n",arr[i], frq[i]);
   `}
   }   
    return 0;
}
