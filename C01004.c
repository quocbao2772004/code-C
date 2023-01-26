#include <stdio.h>

int n;
long long m;

int main()
{
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%lld",&m);
        printf("%.15f",(double)1/m);
        printf("\n");
        n--;
    }

    return 0;
}
