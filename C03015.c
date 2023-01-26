#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
ll n,m;
char s[1000];
ll so;
char x[100];
long long fibo[100001];
int t;
void nt(ll n)
{
    ll nt=2;ll luu;
    while(nt<=sqrt(n))
    {
        while(n%nt==0)
        {
            luu=nt;n/=nt;
        }
        nt++;
    }
    if(n>1)luu=n;
    printf("%lld",luu);
}
int main()
{
    scanf("%d",&t);
   while(t--)
   {
    int ok=0;
    scanf("%lld",&n);
    nt(n);
    printf("\n");
   }
   



    return 0;
}
