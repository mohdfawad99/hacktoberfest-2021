#include <iostream>
#include <climits>
using namespace std;

class array{
    private:
        int *A;
        int size;
        int length;
        void swap(int *x,int *y);
    public:
        array(){
            size = 10;
            length=0;
            A=new int[10];
        }
        array(int sz){
            size = sz;
            length=0;
            A=new int[size]; 
        }
        ~array(){
            delete []A;
        }
        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete(int index);
        int LinearSearch(int key);
        int BinarySearch(int k);
        int Get(int index);
        void Set(int index,int x);
        int Min();
        int Max();
        int Sum();
        int Avg();
        void Reverse();
        void InsertSort();
        array* Merge(array a2);
};
void array::Display(){
    int i;
    for(i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}

void array::Append(int x){
    if(length<size)
        A[length]=x;
        length++;
}

void array::Insert(int index,int x){
    int i;
    if(index>=0 && index<=length){
        for(i=length;i>index;i--)
            A[i]=A[i-1];
        A[index]=x;
        length++;        
    }

}

int array::Delete(int index){
    int x=0;
    int i;
    if(index>=0 && index<=length){
        x=A[index];
        for(i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
        return x;
    }
    return 0;
}

void array::swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int array::LinearSearch(int key){
    int i;
    for(i=0;i<length;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}

int array::BinarySearch(int  key){
    int s,mid,e;
    s=0;
    e=length-1;
    while(s<=e){
        mid=(s+e)/2;
        if(A[mid]==key)
            return key;
        else if(key<A[mid])
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}

int array::Get(int index){
    if(index>=0 && index<=length)
        return A[index];
    return -1;
}

void array::Set(int index,int x){
    if(index>=0 && index<=length)
        A[index]=x;
}

int array::Min(){
    int Min=INT_MAX;
    for(int i=0;i<length;i++){
        if(A[i]<Min)
            Min = A[i];
    }
    return Min;
}

int array::Max(){
    int Max=INT_MIN;
    for(int i=0;i<length;i++){
        if(A[i]>Max)
            Max = A[i];
    }
    return Max;
    
}

int array::Sum(){
    int Sum=0;
    for(int i=0;i<length;i++){
            Sum+=A[i];
    }
    return Sum;   
}

int array::Avg(){
    int Sum=0;
    int avg;
    for(int i=0;i<length;i++)
        Sum+=A[i];

    avg=Sum/length; 
    return avg;   
}

void array::Reverse(){
    int i,j;

    //By creating another array;
    /*int *B;

    B=new int [length];
    for(i=length-1,j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    for(i=0;i<length;i++){
        A[i]=B[i];
    }*/

    // without creating another array;
    for(i=0,j=length-1;i<j;i++,j--){
        swap(&A[i],&A[j]);
    }
}

void array::InsertSort(){
    for(int i=1;i<length;i++){
        int current=A[i];
        int j=i-1;
        while(A[j]>current && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=current;    
    }
}

array* array::Merge(array a2){
    array *a3 = new array [length+a2.length];
    int i,j,k; i=j=k=0;
    while(i<length && j<a2.length){
        if(A[i]<a2.A[j])
            a3->A[k++]=A[i++];
        else   
            a3->A[k++]=a2.A[j++];
    }
    for(;i<length;i++) 
        a3->A[k++]=A[i];
    for(;j<length;j++) 
        a3->A[k++]=A[j];
    a3->length=length+a2.length;
    return a3;
}

int main(){
    array *a1;
    int ch,sz;
    int x,index;
    cout <<"enter size of array "<<endl;
    cin>>sz;
    a1=new array(sz);
    
    do
    {
        cout<<"Menu\n 1.Insert\n 2.Delete\n 3.Search\n 4.Sum\n 5.Display\n 6.Exit";
        cout <<"enter your choice ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"\n enter element and index ";
                cin>>x>>index;
                a1->Insert(index,x);
                break;
            case 2:
                cout<<"\n enter index ";
                cin>>index;
                x=a1->Delete(index);
                cout<<"\n deleted element is "<<x;
                break;
            case 3:
                cout<<"\n enter elemen t you want to search ";
                cin>>x;
                index=a1->LinearSearch(x);
                cout<<"\n element index is "<<index;
                break;
            case 4:
                cout <<"\n Sum is "<<a1->Sum();
                break;
            case 5:
                a1->Display();
        }
    } while (ch<6);
    return 0;
}