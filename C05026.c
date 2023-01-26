#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define f2(i,a,b,j) for(int i=a;i<=b;i+=j )
int n,m;
int a[101][101],b;
int arr[100001];
int arr2[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int c1,c2;int dem;int ma;
void snt(int n)
{
    f(i,2,n)arr[i]=1;
    f(i,2,n)
    {
        f2(j,i*2,n,i)arr[j]=0;
    }
}
int main()
{
    //freopen("d.inp","r",stdin);
    //freopen("d.out","w",stdout);
      snt(1000);
      scanf("%d",&n);
      f(i,1,n)
      {
        dem=0;
         f(j,1,n)
         {
            scanf("%d",&a[i][j]);
            if(arr[a[i][j]]==1)
            {
                dem++;
            }
         }
         if(ma<dem)
         {
            ma=dem;luu=i;
         }
      }
      printf("%d\n",luu);
      f(j,1,n)if(arr[a[luu][j]])printf("%d ",a[luu][j]);
     
      
      
    
    return 0;
}
