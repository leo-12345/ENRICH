#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calc(int n)
{
    //magic square
    int a[n][n],i,j,k=1,l,m;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            a[i][j]=-1;
        }
    }
    i=0;
    j=n/2;
    //printf("%d %d",i,j);
    while(k<=n*n)
    {
        if(i==-1&&j==n)
    {
        a[1][j-1]=k;
        i=0;
        j=0;
    }
     else if(i>=0&&j<n&&a[i][j]==-1)
     {
         a[i][j]=k;
         --i;
         ++j;
         }
     else if(i>=0&&j<n&&(a[i][j]!=-1||(i==-1&&j==n)))
     {
         if(a[i][j]!=-1)
         {
             a[i+2][j-1]=k;
             ++i;
         }
         else
         {
             a[1][n-1]=k;
             i=0;
             j=0;
         }
    }
     else if(i==-1)
     {
         if(a[n-1][j]==-1)
         {
             a[n-1][j]=k;
             i=n-2;
             ++j;
         }
     }
     else if(j==n)
     {
         a[i][0]=k;
         j=1;
         --i;
     }
     ++k;
     }
     for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d  ",a[i][j]);
        }
         printf("\n");
    }
    return 0;
}

int main()
{
int n;
    scanf("%d",&n);
    if(n%2==0||n<0)
    {
        printf("please enter a positive odd integer");
        return 0;
    }
    calc(n);
return 0;
}
