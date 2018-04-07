#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//find next larger palindrome
void nextPal(int a[100],int n)
{
    int i,j,k,l,m;
    for(i=0;a[i]==9&&i<n;++i);  //check if all digits are 9
    if(i==n)
    {
        printf("1");
        for(i=1;i+1<n;++i)
        {
            printf("0");
        }
        printf("1");
    }
    else
    {
        if(n%2==0)
        {
            i=n/2-1;
            j=n/2;
            k=i;
        }
        else
        {
            i=n/2-1;
            j=n/2+1;
            k=i+1;
        }
        //i,j,k are used to store the end of the left half,right half's beginning,end of left half of the array.
        while(i>=0&&a[i]==a[j])
        {
            --i;
            ++j;
        }
        //check the unmatching part of the number. eg: 123343369 then i=1,j=7.
        if(i<0||a[i]<a[j])
        {
        //if number is a palindrome or current a[i]<current a[j].
            a[k]++;
            for(i=k;i>0;--i)
            {
                if(a[i]>9)
                {
                    ++a[i-1];
                    a[i]%=10;
                }
            }
        }
        //print the first half and first half in reverse.
        for(i=0;i<=k;++i)
        {
            printf("%d",a[i]);
        }
        i=k;
        if(n%2==1)
        {
            --i;
        }
        for(;i>=0;--i)
        {
            printf("%d",a[i]);
        }
        
    }
    
}
int main()
{
    int i,j,k,l,m,n,a[100]={0};
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        a[i]=n%10;
        ++i;
        n/=10;
    }
    /*char s[100000];
    scanf("%s",s);//read the input in form of string so that more lengthy palindromes can be formed
    for(i=0;s[i]!='\0';++i)
    {
        a[i]=s[i]-48;
    }
    */
    n=i;
    for(i=0,j=n-1;i<=j;++i,--j)
    {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
    }
    nextPal(a,n);
    return 0;
}
