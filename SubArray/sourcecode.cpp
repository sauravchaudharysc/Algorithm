#include<bits/stdc++.h>
using namespace std;
void printSubarrays(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }
}
void max_SubArrayn3(int a[],int n)
{
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int currentsum=0;
            for(int k=i;k<=j;k++)
            {
                currentsum+=a[k];
            }
            maxSum=max(currentsum,maxSum);
        }
    }
    cout<<maxSum<<endl;
}
void max_SubArrayn2(int a[],int n)
{
    int max_Sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int currentsum=a[i];
        max_Sum=max(currentsum,max_Sum);
        for(int j=i+1;j<n;j++)
        {
            currentsum+=a[j];
            max_Sum=max(currentsum,max_Sum);
        }
    }
    cout<<max_Sum<<endl;
}

void kadanes_Algo(int a[],int n)
{
    int currentsum=0;
    int max_Sum=0;
    for(int i=0;i<n;i++)
    {
        currentsum=max(currentsum+a[i],a[i]);
        max_Sum=max(currentsum,max_Sum);
    }
    cout<<max_Sum<<endl;
}
int main()
{
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    printSubarrays(a,8);
    max_SubArrayn3(a,8);
    max_SubArrayn2(a,8);
    kadanes_Algo(a,8);
}
