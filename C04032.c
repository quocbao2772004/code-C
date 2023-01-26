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
int b;int lmax;
int check(int n)
{
    while(n>0)
    {
        int k=n%10;
        int h=(n/10)%10;
        if(h>k)return 0;
        n/=10;
    }
    return 1;
}
struct giai
{
    int giatri;
    int soluong;

};
int u;
int main()
{
     //fi;fo;
     struct giai a[100001];
     while(scanf("%d",&n)!=-1)
     {
         if(!check(n))continue;
         int ok=1;
         f(i,1,u)
         {
             if(n==a[i].giatri){a[i].soluong++;ok=0;break;}
         }
         if(ok==0)continue;
         u++;
         a[u].giatri=n;a[u].soluong=1;
     }
     f(i,1,u-1)
     {
         f(j,i+1,u)
         {
             if(a[i].soluong>a[j].soluong)
             {
                 int t=a[i].soluong;a[i].soluong=a[j].soluong;a[j].soluong=t;
                 int g=a[i].giatri;a[i].giatri=a[j].giatri;a[j].giatri=g;
             }
         }

     }
     f1(i,u,1)
     printf("%d %d\n",a[i].giatri,a[i].soluong);
    return 0;
}
