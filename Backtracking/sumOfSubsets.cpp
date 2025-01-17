#include<bits/stdc++.h>
using namespace std;
void sumOfSubsets(int a[],int i,int n,int total,int sum,int soln[])
{
    if(total==sum)
    {
        //Print the Soltuion array
        for(int x=0;x<n;x++)
        {
            cout<<soln[x]<<" ";
        }
        cout<<endl;
        return ;
    }
    if(total>sum || i==n)
    {
        return ;
    }
    soln[i]=1; //Pick the value
    sumOfSubsets(a,i+1,n,total+a[i],sum,soln); //Include the value and call for recursion
    soln[i]=0; //Backtrack it.Since the recursion couldnt solve it so it get returned
    sumOfSubsets(a,i+1,n,total,sum,soln); //Skip that value
    return ;
}
int main()
{
    int total=0;
    int sum;
    cin>>sum;
    int a[]={5,10,12,13,15,18};
    int soln[6]={0};
    sumOfSubsets(a,0,6,0,sum,soln);
}