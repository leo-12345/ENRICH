#include <bits/stdc++.h>
 
using namespace std;
int x=0;
//subset generation 
int showSubsets(int n,int a[10000],int b[10000],int size)
{
    int k=0;
    if(n<0)
    {
        return 0;
    }
    int j;
    ++x;
    j=showSubsets(n-1,a,b,size);
    b[size]=a[n];
    ++size;
    j=showSubsets(n-1,a,b,size);
    for(int i=size-1;i>=0;--i)
    {
        k=1;
        printf("%d ",b[i]);
    }
    if(k==1)
    {
        printf("\n");
    }
    
    return 0;
}
//usually there are two possiblities either a number is added in a subset or it is simply skipped so there are 2^n subsets
int main(int argc, char** argv)
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    showSubsets(n-1,a,b,0);
    //printf("%d",x); //x denotes number of subsets
    return 0;
}
