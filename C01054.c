#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int luu;
int test;
ll tong=0;int luui;
int luuj;int tongj=0;
char s[1001];
int dem;int n,nt;
int a[100001];int u=1;
int souoc(int n)
{
    int nt=2;int t=0;
    while(nt<=sqrt(n))
    {
        while(n%nt==0)
        {
            t+=nt;n/=nt;
        }
        nt++;
    }
    if(n>1)t+=n;
    return t;
}
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
       // printf("%d\n",souoc(n));
       tong+=souoc(n);
    }
   printf("%lld",tong);
  
   
    return 0;
}
