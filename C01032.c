#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
char s[1001];
int dem;int n,nt;
ll t=1;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        t=1;
    scanf("%d",&n);
    nt=2;
    while(nt<=sqrt(n))
    {
        if(n%nt==0)
        {
            t*=nt;
           while(n%nt==0)
          {
            n/=nt;
          }
        }
        nt++;
        //printf("%lld\n",t);
    }
    if(n>1)t*=n;
    printf("%lld\n",t);
    }
   
    return 0;
}
