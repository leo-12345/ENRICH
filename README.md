#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //to rotate a number
char num[1000],rot[1000];int count,len,i;
    scanf("%s%d",num,&count);
    len=strlen(num);
    strcpy(rot,num);
    for(i=0;i<len;++i)
    {
        rot[i]=num[(i+count)%len];
    }
    printf("%s",rot);
}
