#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int a[10001];
int n,m;int luu;
int b[10001];
int k;
int test;
int u;
int d=-999999;
int main()
{
    int d2=-99999;
    scanf("%d",&test);
    while(test--)
    {
        int ma=-9999;u=0;
       scanf("%d",&n);
       f(i,1,n)
       {
        scanf("%d",&a[i]);   
       }
       f1(i,n,1)
       {
          if(a[i]>ma){u++;b[u]=a[i];ma=a[i];}
       }
       f1(i,u,1)printf("%d ",b[i]);
       printf("\n");
    }
   //f(i,1,n)printf("%d ",a[i]);
    return 0;
}
