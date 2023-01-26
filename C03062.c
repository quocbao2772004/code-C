#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[101][101],b;
int arr[100001];
ll luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
ll bcnn(ll n,ll m)
{
    ll t=n*m;
    while(m!=0)
    {
        int r=n%m;
        n=m;
        m=r;
    }
    return t/n;
}
int main()
{
   ll n,m;
    scanf("%d",&test);
    f(k,1,test)
    {
         scanf("%lld%lld",&n,&m);
         luu=m;
         f(i,n,m)
         luu=bcnn(luu,i);
         printf("%lld\n",luu);

    }
   
    return 0;
}
