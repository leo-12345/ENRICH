#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int convert(int n,int b)
{
    //number conversion
    int i,j,k=b,l,m,size=0,a[1000];
    /*for example -192=-190-2 or -195+3 since remainders are always positive the latter is chosen and 1 is added to quotient */ 
    while(n!=0)
    {
        int rem=n%b;
        n=n/b;      
        if(rem<0)
        {
            rem+=-1*b;
            ++n;
        }
        a[size]=rem;
        ++size;
    }
    for(i=size-1;i>=0;--i)
    {
        printf("%d",a[i]);
    }
    return 0;
}

int main()
{
int n,b;
    int s[1000];
    scanf("%d%d",&n,&b);//read the input
    convert(n,b);
return 0;
}
