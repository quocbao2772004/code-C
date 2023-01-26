#include<stdio.h>

int main()
{
    long long n;
    long long m;
    scanf("%lld",&n);
    while(n>0)
    {
        scanf("%lld",&m);
        printf("%lld\n",2*m);
        n--;
    }
    
    return 0;
}