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
char s[10001],x[10001];
int a[100001];
char b[101][101];
int dem;
int n;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        ll tong=0,ans=-9999999;
        scanf("%d",&n);
        f(i,1,n)scanf("%d",&a[i]);
        f(i,1,n)
        {
          tong+=a[i];
          if(tong<a[i])tong=a[i];
          ans=tong>ans?tong:ans;
        }
        printf("%lld\n",ans);
    }
   
    return 0;
}
