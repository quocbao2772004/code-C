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
int a[100001];int u=1;
int souoc(int n)
{
    int dem=0;
    f(i,1,sqrt(n))
    if(n%i==0)
    {
       int k=n/i;
       if(k%2==0)dem++;
       if(i%2==0)dem++;
       if(k==i)dem--;
    }
    return dem<0?0:dem;
}
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        printf("%d\n",souoc(n));
       
    }
   
  
   
    return 0;
}
