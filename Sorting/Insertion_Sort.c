#include <stdio.h>
void insertion_sort(int a[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++) //zero element is considered as sorted.
    {
        k=a[i];    
      for(j=i-1;j>=0&&a[j]>k;j--) 
      {  
       a[j+1]=a[j]; 
      }
      a[j+1]=k;
    }  
}

int main()
{
    int i,j,a[50],n;
    printf("Enter the no of elements : - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    insertion_sort(a,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}




