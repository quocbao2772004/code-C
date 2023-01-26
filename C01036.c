#include <stdio.h>

long long n;
long long m;
long long  a,b,c;
long long kt(long long n)
{
    long long tich=1;
    while(n>0)
    {
        tich=tich*(n%10);
        n/=10;
    }
    return tich;
}
int main()
{
    scanf("%lld",&a);
    printf("%lld",kt(a));
    return 0;
}
