#include <stdio.h>

long long n;
long long m;
int  a,b,c;
int kt(long long n)
{
    int k=sqrt(n);

    if(k*k==n)return 1;
    return 0;
}
int main()
{
    scanf("%lld%lld",&a,&b);
        int s=sqrt(a);
        if(s*s!=a)s=s+1;
        int x=sqrt(b);
        printf("%d\n",x-s+1);
        for(int i=s;i<=x;i++)
        printf("%d\n",i*i);
    return 0;
}
