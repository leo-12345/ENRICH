#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //number frequency of an array
    int n,i,j;
    scanf("%d",&n);
    int arr[n],freq[n],dup[n]; 
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        freq[i]=dup[i]=0;
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(arr[i]==arr[j])
            {
                ++freq[i];
                dup[j]=1;
            }
        }
    }
    for(i=0;i<n;++i)
    {
        if(dup[i]==0&&arr[i]>0)
        {
            printf("%d-->%d\n",arr[i],freq[i]+1);
        }
    }
    return 0;
}
