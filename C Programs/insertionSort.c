#include <stdio.h>
#include<conio.h>
#include <time.h>
void quick_sort(int[],int,int);
int partition(int[],int,int);
 int main()
{
	int n,i;
	 clock_t start,stop;
    double cpu_time_used;
    printf("Enter the number of elements to be sorted: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	start=clock();
	quick_sort(a,0,n-1);
	 stop=clock();
	  cpu_time_used=((double)(stop-start))/CLOCKS_PER_SEC;
    printf("\nRunning time=%f\n",cpu_time_used);
	printf("\nArray after sorting:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;		
}
 void quick_sort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}
 int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;
	do
	{
		do
			i++;
		while(a[i]<v&&i<=u);
		do
			j--;
		while(v<a[j]);
if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	a[l]=a[j];
	a[j]=v;
	return(j);
}
