#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
ll a,b;
int x,y,x2,y2;
int main()
{
    ll n;int i=2;
    scanf("%lld",&n);
    f(i,1,n)
    {
        scanf("%d%d%d%d",&x,&y,&x2,&y2);
        if(x2-x==y2-y)printf("YES");
        else printf("NO");
        printf("\n");
    }
    

   
    return 0;
}
