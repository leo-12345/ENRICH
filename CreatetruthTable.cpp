#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
//boolean expression calculation
    char c[100];int d[100],hash[260]={0};
    scanf("%s",c);
    int i,j,k,l,m,n=0;
    for(i=0,j=0;c[i]!='\0';++i)
    {
        if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))
        {
            if(hash[c[i]]==0)
            {
                hash[c[i]]=j+1;
                ++j;
                ++n;
            }
        }
    }
    //n denotes number of inputs
    for(i=0;i<n;++i)
    {
        printf("ip%d ",i+1);
    }
    printf("OP\n");
    for(i=0;i<pow(2,n);++i)
    {   int binary[n],x=i,y=0,z=0,ip[n]={0};
        if(x==0)
        {
            binary[0]=0;
            z=1;
        }
        //decimal to binary
        while(x>0)
        {
            binary[z]=x%2;
            x/=2;
            ++z;
        }
        //reversing the obtained result to get the original binary number
        for(x=0,y=z-1;x<y;++x,--y)
        {
            j=binary[x];
            binary[x]=binary[y];
            binary[y]=j;
        }
        //assigning n bit binary result to input array
        for(j=0,k=n-z;j<z;++j,++k)
        {
            ip[k]=binary[j];
        }
        int stack[1000],top=0;
        //to handle the parenthesis part as parenthesis has the highest precedence
        for(j=0;c[j]!='\0';++j)
        {
            if(c[j]!=')')
            {
                if((c[j]>='a'&&c[j]<='z')||(c[j]>='A'&&c[j]<='Z'))
                {
                    stack[top]=ip[hash[c[j]]-1];
                }
                else
                {
                    stack[top]=c[j];
                }
                ++top;
            }
            else
            {
                if(stack[top-2]=='+')
                {
                    x=stack[top-1]|stack[top-3];
                    top-=3;
                    stack[top-1]=x;
                }
                if(stack[top-2]=='*')
                {
                    x=stack[top-1]&stack[top-3];
                    top-=3;
                    stack[top-1]=x;
                }
                if(stack[top-2]=='^')
                {
                    x=stack[top-1]^stack[top-3];
                    top-=3;
                    stack[top-1]=x;
                }
                if(stack[top-2]=='!')
                {
                    x=!stack[top-1];
                    top-=2;
                    stack[top-1]=x;
                }
            }
        }
     for(j=0;j<n;++j)
        {
            printf("%d   ",ip[j]);
        }
     //to handle the remaining expression that is free of parenthesis
     for(j=0;j<top;++j)
        {
            if(stack[j]==43) //43=+ to handle +
            {
                stack[j-1]=stack[j-1]|stack[j+1];
                top-=2;
                for(k=j;k<top;++k)
                {
                    stack[k]=stack[k+2];
                }
            }
         if(stack[j]==42) //42=* to handle *
            {
                stack[j-1]=stack[j-1]&stack[j+1];
                top-=2;
                for(k=j;k<top;++k)
                {
                    stack[k]=stack[k+2];
                }
            }
         if(stack[j]==94) //94=^ to handle XOR
            {
                stack[j-1]=stack[j-1]^stack[j+1];
                top-=2;
                for(k=j;k<top;++k)
                {
                    stack[k]=stack[k+2];
                }
            }
         if(stack[j]==33) //33=! to handle NOT
            {
                stack[j]=!stack[j+1];
                top-=1;
                for(k=j+1;k<top;++k)
                {
                    stack[k]=stack[k+1];
                }
            }
         
        }
        printf("%d\n",stack[0]);
     }
}
