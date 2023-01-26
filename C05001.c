#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[101][101],b[101][101];

int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    f(i,1,n)
    {
        f(j,1,m)
        {
         scanf("%d",&a[i][j]);   
         b[j][i]=a[i][j];    
        }

    }
    f(i,1,m)
    {
        f(j,1,n)printf("%d ",b[i][j]);
        printf("\n");
    }
    
   
    return 0;
}
