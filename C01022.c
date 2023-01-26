#include <stdio.h>

int n;
long long m;
int  a,b,c;

int tinhtcs(int n)
{
    int a1=0;
    while(n>0)
    {
        a1=a1+n%10;
        n/=10;
    }
    return a1;
}
int main()
{
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&a);
        printf("%d\n",tinhtcs(a));
        n--;
    }
    //printf("%d",a);
    return 0;
}
