#include <stdio.h>

long long n;
long long m;
long long  a,b,c;

long long tong;

long long arr1[10001];
int arr2[10001];
int kt(long long n)
{
    int t=1;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
    {
        if(i*i==n)t=t+i;
        else t=t+i+n/i;
    }
    if(t==n)return 1;
    return 0;
}
int main()
{
    scanf("%lld",&n);


   printf("%d",kt(n));
    return 0;
}
