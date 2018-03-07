#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//string sort.

int sort(int n,char a[n][10])
{
    int i,j,k;
    char s[10];
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if((strcmp(a[i],a[j])>0&&strlen(a[i])==strlen(a[j]))||(strlen(a[i])>strlen(a[j])))
            {
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
    
    int n,i,j,k;
    scanf("%d",&n);
    char num[n][10],temp[10];
    for(i=0;i<n;++i)
    {
        scanf("%s",temp);
        for(j=0;j<strlen(temp)&&temp[j]=='0';++j);
        for(k=0;j<strlen(temp);++j,++k)
        {
            num[i][k]=temp[j];
        }
        num[i][k]='\0';
            
    }
    for(i=0;i<n;++i)
    {
        printf("\n%s\n",num[i]);
    }
    sort(n,num);
    return 0;
}
