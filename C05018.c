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
int ktnt(int n)
{
    if(n<2)return 0;
    f(i,2,sqrt(n))
    if(n%i==0)return 0;
    return 1;
}
void sinhnt(int n)
{
    int dem=0;
    int nt=2;int i=1;
    while(dem<=n)
    {
      if(ktnt(nt)==1)
      {
        arr[i]=nt;i++;
        dem++;
      }
      nt++;
    }
}
int main()
{
    int n,m;
    
    sinhnt(25);
    m=1;
   // f(i,1,20)printf("%d ",arr[i]);
   scanf("%d",&test);
   while(test--)
   {
    scanf("%d",&n);int k=n*n;
    int dong=n;int cot=n;
    int p=1;
    while(k>=1)
    {
        f(i,p,cot){a[p][i]=k;k--;}
        f(i,p+1,dong){a[i][dong]=k;k--;}
        f1(i,cot-1,p){a[dong][i]=k;k--;}
        f1(i,dong-1,p+1){a[i][p]=k;k--;}
        p++;cot--;dong--;
        /*printf("lan\n");
        f(i,1,n)
           {
            f(j,1,n)printf("%d ",a[i][j]);
             printf("\n");
           }*/

    }
    printf("Test %d:\n",m);m++;
    f(i,1,n)
    {
        f(j,1,n)printf("%d ",a[i][j]);
        printf("\n");
    }
   }
    
    return 0;
}
