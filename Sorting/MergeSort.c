#include<stdio.h>
void merger(int a[],int lb,int ub,int mid)
{
    int temp[ub-lb+1];
    int i,j,k;
    i=lb,j=mid+1,k=0;
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];    
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
            temp[k++]=a[i++];    
        
    }
    while(j<=ub)
    {
            temp[k++]=a[j++];

    }
    for(i=lb;i<=ub;i++)
    {
        a[i]=temp[i-lb];
    }
}
void merge_Sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_Sort(a,lb,mid);
        merge_Sort(a,mid+1,ub);
        merger(a,lb,ub,mid);
    }
}

int main()
{
    int a[]={2,23,25,20,21,22,10,65,23,36,65,95,85,45,75,65,15,25,95,35,15,265,4};
    
    merge_Sort(a,0,22);
    
    for(int i=0;i<23;i++)
        printf("%d ",a[i]);
}
