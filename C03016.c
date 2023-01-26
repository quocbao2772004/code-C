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
void fbnx()
{
    fibo[1]=1;fibo[2]=1;
    f(i,3,1000)
    fibo[i]=fibo[i-1]+fibo[i-2];
}
int main()
{
   scanf("%d",&t);
   fbnx();
   while(t--)
   {
    int ok=0;
    scanf("%lld",&n);
    if(n==0){printf("YES\n");continue;}
    f(i,1,1000)
    if(fibo[i]==n)ok=1;
    if(ok)printf("YES");
    else printf("NO");
    printf("\n");
   }
   //printf("%lld",fibo[1000]);



    return 0;
}
