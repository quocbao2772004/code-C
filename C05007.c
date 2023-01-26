#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n,m;
int a[101][101],b;
int arr[100001];
int arr2[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int c1,c2;
int main()
{
    //freopen("d.inp","r",stdin);
    //freopen("d.out","w",stdout);
    
      scanf("%d%d",&n,&m);
      f(i,1,n)
      f(j,1,m)scanf("%d",&a[i][j]);
      scanf("%d%d",&c1,&c2);
      f(i,1,n)
      {
        f(j,1,m)
        {
            if(j==c1)arr[i]=a[i][j];
            else if(j==c2)arr2[i]=a[i][j];
        }
      }
      f(i,1,n)
      {
        f(j,1,m)
        {
            if(j==c1)
            printf("%d ",arr2[i]);
            else if(j==c2)
            printf("%d ",arr[i]);
            else printf("%d ",a[i][j]);
        }
        printf("\n");
      }
      
    
    return 0;
}
