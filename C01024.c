#include <stdio.h>

int n;
long long m;
int  a,b,c;

int kt(int n)
{
    int luu=n%10;int luu2;
    while(n>0)
    {
        luu2=n%10;n/=10;
    }
    if(luu==luu2)return 1;
    return 0;
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
    //printf("%d",a);
    return 0;
}
