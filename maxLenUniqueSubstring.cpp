#include <bits/stdc++.h>
 //maximum length unique substring
using namespace std;
int hashh(char s[1000],int start,int end)
{
    int a[260]={0},i;
    for(i=start;i<=end;++i)
    {
        a[s[i]]++;
        if(a[s[i]]>1)    //if any character repeats itself more than once return -1
        {
            return -1;
        }
    }
    return start;       //if all characters in substring are unique then return start of substring
}
void printSubstring(char s[1000],int len)
{
    for(int i=0;i+len<strlen(s);++i)
    {
        int j=hashh(s,i,i+len-1);
        if(j!=-1)      //if substring is unique then j!=-1 so print the substring
        {
            for(int k=i;k<i+len;++k)
            {
                printf("%c",s[k]);
            }
            printf("\n");
        }
    }
}
int maxLength(char s[1000])
{
    int i,j,k,l,start,end,res,len=1;
    for(start=0;start<strlen(s);++start)
    {
        for(end=start+1;end<strlen(s);++end)
        {
            res=-1;      
            res=hashh(s,start,end);   //to find uniqueness of s(start to end)
            if(res==start&&end-start+1>len)
            {
                len=end-start+1;        //if start gets returned then the string is unique and it is checked with max length
            }
        }
    }
    printSubstring(s,len);            //to print all unique substrings of length len
    return len;
}
int main(int argc, char** argv)
{
//maximum length unique substring
    int i,j,k,l,m,n;char s[100];
    scanf("%[^\n]s",s);
    maxLength(s);
}
