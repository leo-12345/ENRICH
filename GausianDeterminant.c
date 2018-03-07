#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//string sort.

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
    return res;
}

int main() {
    
    int n,i,j;
    scanf("%d",&n);
    float num[n][n];
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%f",&num[i][j]);
        }
    }
    printf("%f",det(n,num));
    return 0;
}
