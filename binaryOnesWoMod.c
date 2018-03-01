#include<stdio.h>

#include <stdlib.h>



int main()

{

    //to print no of 1s in binary form without modulo operator

long long int num,count=0;

    scanf("%lld",&num);

    while(num>0)

    {

        if(num!=(num/2)*2)

        {

            ++count;

        }

        num/=2;

    }

    printf("%lld",count);

}
