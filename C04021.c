#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[10001];
int n,m;int luu;int dem;
int b[10001];
int k;
int test;
int u;
int d=999999;
int maxx(int n,int m)
{
    return n>m?n:m;
}
int ktnt(int n)
{
    if(n<2)return 0;
    f(i,2,sqrt(n))
    if(n%i==0)return 0;
    return 1; 
}
int main()
{
    scanf("%d",&n);
    f(i,1,n)
    {
         scanf("%d",&a[i]);
         
    }
    scanf("%d",&m);
    
    f(i,n-m+1,n)
    {
       printf("%d ",a[i]);
    }
    f(i,1,n-m)
    {
        printf("%d ",a[i]);
    }
   
    
    return 0;
}
