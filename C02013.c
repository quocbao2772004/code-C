#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[10001];
int n,m;int luu;
int b[10001];
int k;
int test;
int u;
int d=999999;
int maxx(int n,int m)
{
    return n>m?n:m;
}
int main()
{
    int d2=99999;
    scanf("%d%d",&n,&m);
    int ma=maxx(n,m);
    k=1;
    f(i,1,n)
    {
        luu=ma;int dem=0;
       while(ma>=1&&dem<m)
       {
        printf("%d",ma);
        ma--;dem++;
       }
       int j=2;
       while(dem<m)
       {
         printf("%d",j);j++;
         dem++;
       }
       ma=luu-1;
       printf("\n");
    }
    
    return 0;
}
