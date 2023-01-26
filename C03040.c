#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
ll kt(ll n)
{
    ll tcs=0;
    int sd=0;
  while(n>0)
  {
      tcs=tcs+n%10;
      n/=10;
  }
  return tcs;
}
ll ptnt(ll n)
{
    int nt=2;
    int d=0,ok=0;
    ll ans=0;
    while(n>1)
    {
        ok=0;
        if(n%nt==0)
        {
            d=0;ok=1;
            while(n%nt==0)
            {
                ans+=kt(nt);
                n=n/nt;
            }
        }
        nt++;
    }
    return ans;
}
ll a,b;
int main()
{
    ll n;int i=2;
    scanf("%lld",&n);
  
    if(kt(n)==ptnt(n))printf("YES");
    else printf("NO");

   
    return 0;
}
