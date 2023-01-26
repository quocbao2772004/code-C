#include <stdio.h>

int n;
long long m;
int  a,b,c;

int main()
{
    scanf("%d",&n);
    while(n>0)
    {
        a=a+n%10;
        n/=10;
    }
    printf("%d",a);
    return 0;
}
