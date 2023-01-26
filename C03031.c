#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int ucln(ll a,ll b)
{
    while(b!=0)
    {
        int r=a%b;
        a=b;b=r;
    }
    return a;
}
ll a,b,c,d;
int main()
{
    int n;int k=0;int h=0;int m;
    char s[10001];
    scanf("%d",&n);
    f(i,1,n)
    {
         scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
         if(ucln(a,b)==ucln(c,d))printf("YES");
         else printf("NO");
         printf("\n");
        
    }
    
    return 0;
}