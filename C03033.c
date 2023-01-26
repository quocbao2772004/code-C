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
  while(n>0)
  {
      tcs=tcs+n%10;
      n/=10;
  }
  return (tcs%10==0 ? 1:0) ;
}
ll ucln(ll a,ll b)
{
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return (a==1?1:0);
}
void ptnt(ll n)
{
    int nt=2;
    int d=0,ok=0;
    while(n>1)
    {
        ok=0;
        if(n%nt==0)
        {
            d=0;ok=1;
            while(n%nt==0)
            {
                d++;
                n=n/nt;
            }
        }
        if(ok==1)
        {
            printf("%d^%d",nt,d);
            ok=1;
            if(n>1)printf(" * ");
        }
        nt++;
    }
}
ll a,b;
int main()
{
    int n;int i=2;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%lld",&a);
        printf("%d = ",a);
        ptnt(a);
        printf("\n");
    }


    //printf("%d",kt(n));
    return 0;
}
