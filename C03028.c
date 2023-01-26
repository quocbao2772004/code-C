#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
ll gt(int n)
{
    ll giaithua=1;
    f(i,1,n)giaithua*=i;
    return giaithua;
}
ll giatri(int n,int k)
{
    return gt(n)/(gt(k)*gt(n-k));
}
int n,m;

ll so;
int a[101][101];

int main()
{
   scanf("%d",&n);
   f(i,0,n-1)
   {
    f(j,0,n-1)
       a[i][j]=giatri(i,j);
   }
   f(i,0,n-1)
   {
    f(j,0,i)printf("%d ",a[i][j]);
    printf("\n");
   }
   





    return 0;
}
