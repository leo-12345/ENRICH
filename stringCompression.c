 as no#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compression(char s[100000])
{
    //string compression
    printf("%s\n",s);
    int i,j;
    for(i=0;i+1<strlen(s);)
    {   for(j=i;j+1<strlen(s)&&s[j]==s[j+1];++j);//check for equality of adjacent characters
        printf("%c",s[i]);//print the current character and number of characters that are repeated
        if(j-i+1>1)
        {
        printf("%d",j-i+1);
        }
        i=j+1;
    }
    if(s[strlen(s)-1]!=s[strlen(s)-2])//check for last character
    {
        printf("%c",s[strlen(s)-1]);
        
    }
    return 0;
}

int main()
{
char s[100000];
    scanf("%[^\n]s",s);//read the string till a new line occurs as normal string reading reads till first space
    compression(s);
return 0;
}
