#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //vowel frequency of a string,assuming y as a consonent
    char s[10000],vowels[5]={'a','e','i','o','u'};
    scanf("%[^\n]s",s);
    int vow[5]={0,0,0,0,0},i,j;
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]=='a'||s[i]=='A')
        {
            ++vow[0];
        }
        if(s[i]=='e'||s[i]=='E')
        {
            ++vow[1];
        }
        if(s[i]=='i'||s[i]=='I')
        {
            ++vow[2];
        }
        if(s[i]=='O'||s[i]=='o')
        {
            ++vow[3];
        }
        if(s[i]=='u'||s[i]=='U')
        {
            ++vow[4];
        }
    }
    for(i=0;i<5;++i)
    {
        if(vow[i]>0)
        {
            printf("%c-->%d\n",vowels[i],vow[i]);
        }
    }
    return 0;
}
