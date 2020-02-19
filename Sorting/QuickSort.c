#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int pivot=a[lb],i=lb,j=ub+1;
    do{
        do{
            i++;
        }while(i<=j && a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j)
        {
            a[i]^=a[j]^=a[i]^=a[j];
        }
    }while(i<j);
    if(lb!=j)
    {
            a[lb]^=a[j]^=a[lb]^=a[j];
    }
    return j;
}
void quick_sort(int a[],int lb,int ub)
{
    int pivot;
    if(lb<=ub)
    {
        pivot=partition(a,lb,ub);
        quick_sort(a,lb,pivot-1);
        quick_sort(a,pivot+1,ub);
    }
}
int main()
{
    int a[]={2,23,25,20,21,22,10,65,23,36,65,95,85,45,75,65,15,25,95,35,15,265,4};
    
    quick_sort(a,0,22);
    
    for(int i=0;i<23;i++)
        printf("%d ",a[i]);
   
    return 0;
}

