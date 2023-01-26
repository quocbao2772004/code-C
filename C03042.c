#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int kt(ll n)
{
    ll tcs=0;
    ll sd=n%10;
    n/=10;
  while(n>0)
  {
     if(n%10<=sd)return 0;
     sd=n%10;
      n/=10;
  }
  return 1;
}
ll d;
ll a,b;
int main()
{
    ll n;int i=2;
    scanf("%lld",&n);
    f(i,1,n)
    {
        d=0;
        scanf("%lld%lld",&a,&b);
        f(j,a,b)
        {
            if(kt(j))d++;
        }
        printf("%lld",d);
        printf("\n");
    }

   
    return 0;
}
