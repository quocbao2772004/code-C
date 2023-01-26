#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int test;

int gm,gb;int n,m;
int n;int sum;
 int  c[101][101];
ll dd[10001];int dem;
int a[10001],b;int lmax;
int main()
{
     //fi;fo;
    scanf("%d",&n);
    f(i,1,n)scanf("%d",&a[i]);
    f(j,1,n)
    {
        int ok=0;
        f(i,1,n-1)
      {
        if(a[i]>a[i+1])
        {
            int t=a[i];a[i]=a[i+1];a[i+1]=t;
        }
      }
      printf("Buoc %d: ",j);
      f(i,1,n)
      {
          if(i+1<=n&&a[i]>a[i+1])ok=1;
          printf("%d ",a[i]);
      }
      if(!ok)break;
      printf("\n");
    }


    return 0;
}
