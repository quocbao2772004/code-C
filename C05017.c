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
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int main()
{
    //freopen("d.inp","r",stdin);
    //freopen("d.out","w",stdout);
    scanf("%d",&test);
    while(test--)
    {
      scanf("%d%d",&n,&m);
      f(i,1,n)
      f(j,1,m)scanf("%d",&a[i][j]);
      int k=1;int hang=n;int cot=m;
      int p=1;
      while(k<=n*m)
      {
        f(i,p,cot){printf("%d ",a[p][i]);k++;}
        //printf("\n");
        f(j,p+1,hang){printf("%d ",a[j][cot]);k++;}
        // printf("\n");
        if(p!=hang)
        f1(i,cot-1,p){printf("%d ",a[hang][i]);k++;}
        // printf("\n");
        if(p!=cot)
        f1(j,hang-1,p+1){printf("%d ",a[j][p]);k++;}
         //printf("\n");
        p++;hang--;cot--;
      }
      printf("\n");
    }
    return 0;
}
