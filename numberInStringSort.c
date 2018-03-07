#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//string sort which can handle negative number and preceding zeros.

int numc(char a[])
{
    int i,j=0;
    for(i=0;i<strlen(a);++i)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
           j+=a[i]-48;
           j*=10;
        }
    }
    if(a[0]=='-')
    {
        j*=-1;
    }
    return j/10;
}
int sort(int n,char a[n][10])
{
    int i,inta[n],j,k;
    char s[10];
    for(i=0;i<n;++i)
    {
        inta[i]=numc(a[i]);
        //printf("%s\n",a[i]);     
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(inta[i]>inta[j])
            {
                k=inta[i];
                inta[i]=inta[j];
                inta[j]=k;
                strcpy(s,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],s);
            }
        }
    }
    for(i=0;i<n;++i)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}

int main() {
    
    int n,i;
    scanf("%d",&n);
    char num[n][10],**res;
    for(i=0;i<n;++i)
    {
        scanf("%s",num[i]);
    }
    sort(n,num);
    return 0;
}
