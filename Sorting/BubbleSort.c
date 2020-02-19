/*IN bubble_sort the largest element is placed at last in each j 
loop and then in next loop the evaluation is done 1 less than before.
Flag is used if there are no swap then the element is already sorted.
And the loop terminates.
*/
#include <stdio.h>
void bubble_sort(int a[],int n)
{
    int i,j,temp,flag=1;
    for(i=0;i<n-1&&flag==1;i++)
    {   
      flag=0;    
      for(j=0;j<n-1-i;j++)
      {  
        if(a[j+1]<a[j])
        {
            flag=1;
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
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
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}



