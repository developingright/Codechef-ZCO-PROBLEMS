#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n ,i;
    scanf("%ld",&n);
    int l[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    long int fin =0;
    for (i=0;i<n;i++)
    {
        for (long int k = i+1;k<n;k++)
        {
            int sub = abs((l[i]-l[k]));

            fin = fin + sub;
        }
    }
    printf("%ld",fin);
    return 0;
}
