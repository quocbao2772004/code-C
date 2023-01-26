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
int d=999999;int dem;
int maxx(int n,int m)
{
    return n>m?n:m;
}
int main()
{
    int d2=99999;
    scanf("%d%d",&n,&m);
    int ma=maxx(n,m);
    k=1;int luu=ma;
    f(i,1,n)
    {
        luu=ma;int j=1;
       while(j<=i-1&&j<=m)
       {
        printf("%c",luu+96);
        luu--;j++;
       }
       f(j,i,m)
       {
        printf("%c",luu+96);
       }
       printf("\n");

    }
    
    return 0;
}
