#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int n,m;
char s[1000];
ll so;
char x[100];
long long fibo[100001];
int t;
int maxx(int n,int k)
{
    return n>k?n:k;
}
int minn(int n,int k)
{
    return n<k?n:k;
}
int check(int n)
{
    int sd=0;int tcs=0;
    int luu=n;int dem6=0;
    while(n>0)
    {
      sd=sd*10+n%10;
      tcs+=n%10;
      if(n%10==6)dem6++;
      n/=10;
    }
   return tcs%10!=8?0:sd!=luu?0:dem6>=1?1:0;
    //return sd;
}
int main()
{
   
    
    scanf("%d%d",&n,&m);int dem=0;
   int mi=minn(n,m);int ma=maxx(n,m);
   f(i,mi,ma)
   {
      if(check(i)==1) printf("%d ",i);
   }
   
   
   
   //printf("%d",check(t));



    return 0;
}
