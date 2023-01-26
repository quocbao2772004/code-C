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
   scanf("%d",&test);
   f(z,1,test)
   {
    f(i,1,50)
    {
        f(j,1,50)
        {
            d[i][j]=0;b[i][j]=0;
        }
    }
    int n,m;int p,q;
    scanf("%d%d",&n,&m);
    f(i,1,n)
    {
        f(j,1,m)scanf("%d",&a[i][j]);
    }
    f(i,1,m)
    {
        f(j,1,n)b[i][j]=a[j][i];
    }
    f(i,1,n)
    {
        f(j,1,n)
        {
            int k=1;
            while(k<=m)
            {
                d[i][j]+=a[i][k]*b[k][j];
                k++;
            }
        }
    }
    printf("Test %d:\n",z);
    f(i,1,n)
    {
         f(j,1,n)printf("%d ",d[i][j]);
         printf("\n");
    }
    
   }


    return 0;
}
