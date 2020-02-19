#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void heapify(int a[],int i,int n)
{
    int left =2*i+1;
    int right =2*i+2;
    int largest=i;
    if(left<n && a[left]>a[largest])
    {
        largest=left;
    }
    if(right<n && a[right]>a[largest])
    {
        largest=right;
    }
    if(i!=largest)
    {
        swap(&a[i],&a[largest]); //swap the values which is the largest
        heapify(a,largest,n); //recursively heapify the affected sub tree
    }
}
void heap_sort(int a[],int n)
{
    int i;
    for(i=(n/2)-1;i>=0;i--)
    {
        heapify(a,i,n); //Heapify Each Internal Nodes(Build a heap)
    }
    for(i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]) ; //Swap the root node with the last position element
        n--;              //make the array size decrease by 1
        heapify(a,0,n);   //again heapify and get the root node max value
    }
    
}
int main()
{  
    int a[]={98,23,25,20,21,22,10,65,23,36,65,95,85,45,75,65,15,25,95,35,15,265,4};
    
    heap_sort(a,23);
    
    for(int i=0;i<23;i++)
    printf("%d ",a[i]);
   
    return 0;
}


