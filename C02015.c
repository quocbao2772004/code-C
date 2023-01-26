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

int main()
{
    int d2=99999;
    scanf("%d",&n);
    k=1;
    f(i,1,n)
    {
       f(j,1,k)printf("%d",j);
       k+=2;
       printf("\n");
    }
    
    return 0;
}
