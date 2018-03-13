#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//determinant.

float det(int n,float a[n][n])
{
    int i,j,k,m,x=0,y,t[n];
    float l;
    for(i=0;i<n;++i)
    {
        for(j=0;j<i;++j)
        {
                l=a[i][j]/a[j][j];
                for(k=0;k<n;++k)
                {
                    a[i][k]=a[i][k]-a[j][k]*l;
                }
        }
    }
    float res=1;
    for(i=0;i<n;++i)
    {
        res*=a[i][i];
    }
   if(res<0)
   {
       res*=-1;
   }
    return res;
}

int main() {
    
    int n,i,j,k;
    scanf("%d",&n);
    float num[n][n];
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%f",&num[i][j]);
        }
    }
    if(num[0][0]==0)
    {
    for(i=0;i<n;++i)
    {
        if(num[i][0]!=0)
        {
            break;
        }
    }
    for(j=0;j<n;++j)
    {
        k=num[i][j];
        num[i][j]=num[0][j];
        num[0][j]=k;
    }
    }
    printf("%f",det(n,num));
    return 0;
}
