#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void merge(int a[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int b[100];
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            b[k++]=a[i++];
        }
        else
        {
            b[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
            b[k++]=a[i++];
    }
    while(j<=h)
    {
            b[k++]=a[j++];
    }
    for(i=l;i<=h;i++)
        a[i]=b[i];
}    

void IMerge_sort(int a[],int n)
{
    int p,l,h,mid,i;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<=n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(a,l,mid,h);
        }
    }
    if(p/2<n)
    {
        merge(a,0,p/2-1,n);
    }
}
int main()
    {
    int a[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    
     IMerge_sort(a,n);
    
     for(i=0;i<10;i++)
     printf("%d ",a[i]);
     printf("\n");
    return 0;
}
