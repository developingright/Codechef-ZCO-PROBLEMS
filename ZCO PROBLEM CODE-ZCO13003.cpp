#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    long long int l,k;
    int i;
    scanf("%lld",&l);
    scanf("%lld",&k);
    int a [l];
    for (i =0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    long long sum=0;
    for (i=0;i<l;i++)
    {
        for (long int j = i+1;j<l;j++)
        {
            int sub = abs((a[i]+a[j]));
            if (sub<k){
                sum = sum +1;
            }
        }
    }

    printf("%lld",sum);
    return 0;
}