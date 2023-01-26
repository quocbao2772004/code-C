#include <stdio.h>

int n;
long long m;
int  a,b,c;
int ucln(int a,int b)
{
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d%d",&a,&b);
        printf("%d",ucln(a,b));
        printf("\n");
        n--;
    }
    //printf("%d",a);
    return 0;
}
