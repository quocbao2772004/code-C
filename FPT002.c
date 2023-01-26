#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[101][101];
int b[101][101],c[101][101];
int d[101][101],e[101][101];
int arr[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int main()
{
   // freopen("d.inp","r",stdin);
   // freopen("d.out","w",stdout);
    int n,m;int p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    f(i,1,m)
    {
        f(j,1,n)scanf("%d",&a[i][j]);
    }
    f(i,1,n)
    {
        f(j,1,p)scanf("%d",&b[i][j]);
    }
    f(i,1,p)
    {
        f(j,1,q)scanf("%d",&c[i][j]);
    }
    f(i,1,m)
    {
        f(j,1,p)
        {
            int k=1;
            while(k<=n)
            {
                d[i][j]+=a[i][k]*b[k][j];
                k++;
            }
        }
    }
    f(i,1,m)
    {
        f(j,1,q)
        {
            int k=1;
            while(k<=p)
            {
                e[i][j]+=d[i][k]*c[k][j];
                k++;
            }
        }
    }
    f(i,1,m)
    {
         f(j,1,q)printf("%d ",e[i][j]);
         printf("\n");
    }



    return 0;
}
