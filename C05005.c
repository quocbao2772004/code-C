#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[101][101],b;
int arr[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int main()
{
    int n,m;
    scanf("%d",&test);
    f(k,1,test)
    {
        tong=0;tongj=0;
         scanf("%d%d",&n,&m);
         f(i,1,n)
         {
            tong=0;
            f(j,1,m)
            {
                scanf("%d",&a[i][j]);
                
            }

         }
         printf("Test %d:\n",k);
         f(i,1,n)
         {
             f(j,1,m) 
             if(i!=1&&j!=1)printf("%d ",a[i][j]);
             if(i!=1)printf("\n");
         }
         
         
    }
   
    return 0;
}
