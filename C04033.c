#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n;
int a[100001];
int test;
int b[100001];
int u;
int main()
{
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    f(i,1,n)
    if(b[a[i]]>=1)
    {
        printf("%d ",a[i]);
        b[a[i]]=0;
    }
   
    return 0;
}
