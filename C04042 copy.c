#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int test;int n;
int u=0;char s[1001];int m;
int x;
int main()
{
    //fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);int a[n];
    f(i,1,n)
    {
        scanf("%d",&a[i]);
    }
      int ok=0;
       f(i,1,n-1)
      {
        f(j,i+1,n)if(a[i]==a[j]){ok=1;printf("%d\n",a[i]);break;}
        if(ok)break;
      }
       if(ok==0)printf("NO\n");
    }


    return 0;
}


