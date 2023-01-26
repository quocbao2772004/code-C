#include <stdio.h>

int n;
long long m;

int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&m);
        a=sqrt(m);
        if(a*a==m)printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}
