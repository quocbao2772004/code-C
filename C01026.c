#include <stdio.h>

int n;
long long m;
int  a,b,c;

int kt(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&a);
        if(kt(a)==1)printf("YES");
        else printf("NO");
        printf("\n");
        n--;
    }
 
    return 0;
}
