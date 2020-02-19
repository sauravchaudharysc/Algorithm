/*In selection sort the element with smallest value is kept at first position
then in the next j loop the comparsion is done from j+1 and so on*/
#include <stdio.h>
void selection_sort(int a[],int n)
{
  int i,k,j,temp;
   for(i=0;i<n;i++)
    {     
       k=i;
      for(j=i+1;j<n;j++)
      {  
        if(a[j]<a[k])
        {
            k=j;
        }
      }
      if(k!=i)
      {
         temp=a[k];
         a[k]=a[i];
         a[i]=temp;
      }
    }  
}

int main()
{
    int i,j,a[50],n;
    printf("Enter the no of elements : - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selection_sort(a,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}



