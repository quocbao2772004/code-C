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
int tong;
int main()
{
   scanf("%d",&t);
   
   f(i,1,t)
   {
    
    scanf("%lld",&n);
    tong+=n;
    
   }
   printf("%.3f",(float)tong/t);
   



    return 0;
}
