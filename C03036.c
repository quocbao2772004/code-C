#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int max(int a,int b)
{
    return (a>b? a:b);
}
int arr[1000001];
int kt(ll n)
{
    int tcs=0;
    ll sd=0;
    ll luu=n;
  while(n>0)
  {
    
      int k=n%10;
      sd=sd*10+k;
      if(k%2==0)return 0;
      tcs=tcs+n%10;
      n/=10;
  }
  return (tcs%2!=0&&sd==luu ?1:0) ;
}
ll a,b;
int main()
{
    int n;int i=2;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%lld",&a);
       if(kt(a))printf("YES");
       else printf("NO");
        printf("\n");
    }


    //printf("%d",kt(n));
    return 0;
}
