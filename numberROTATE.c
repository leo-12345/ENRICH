#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //number rotate
    int num,rot,i=0,a[10],j,k,l;
    for(i=0;i<10;++i)
    {
        a[i]=0;
    }
    scanf("%d%d",&num,&rot);
    i=0;
    while(num>0)
    {
        a[i]=num%10;
        num/=10;
        i++;
    }
    for(j=0,k=i-1;j<i/2;++j,--k)
    {
        l=a[k];
        a[k]=a[j];
        a[j]=l;
    }
    for(j=0;j<i;++j)    
    {
        printf("%d",a[(j+rot)%i]);
    }
    
}
