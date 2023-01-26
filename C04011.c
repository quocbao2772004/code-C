#include<stdio.h>
#include<string.h>
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
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        int m=-999;dem=0;
        scanf("%d",&n);
        f(i,1,n)
        {
            scanf("%d",&a[i]);
            if(m<=a[i]){m=a[i];dem++;}

        }
        printf("%d",dem);
        printf("\n");
    }
    
    return 0;
}
