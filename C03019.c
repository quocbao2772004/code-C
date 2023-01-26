#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
ll n,m;
char s[1000];
ll so;
char x[100];
long long fibo[100001];
int t;
ll mu(int n,int k)
{
    ll t=1;
    f(i,1,k)t*=n;
    return t;
}
int check(ll n)
{
    ll sd=0;int tcs=0;
    ll luu=n;
    while(n>0)
    {
      sd=sd*10+n%10;
      tcs+=n%10;
      n/=10;
    }
   return tcs%10!=0?0:sd==luu?1:0;
    //return sd;
}
int main()
{
   scanf("%d",&t);
   
   while(t--)
   {
    
    scanf("%lld",&n);int dem=0;
   ll luu1=mu(10,n-1)+1;ll luu2=mu(10,n)-1;
   f(i,luu1,luu2)
   {
      if(check(i)==1)dem++;
   }
    printf("%d\n",dem);
   }
   //printf("%lld",fibo[1000]);*/
   //printf("%d",check(t));



    return 0;
}
