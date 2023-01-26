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
    int k=1;
    scanf("%d",&n);
    int dong=2*n-1;int cot=2*n-1;
    int p=1;k=n;
    while(k>=1)
    {
        f(i,p,cot){a[p][i]=k;}
        f(i,p+1,dong){a[i][dong]=k;}
        f1(i,cot-1,p){a[dong][i]=k;}
        f1(i,dong-1,p+1){a[i][p]=k;}
        p++;cot--;dong--;k--;
        /*printf("lan\n");
        f(i,1,n)
           {
            f(j,1,n)printf("%d ",a[i][j]);
             printf("\n");
           }*/

    }
    f(i,1,2*n-1)
    {
        f(j,1,2*n-1)printf("%d",a[i][j]);
        printf("\n");
    }
    return 0;
}
