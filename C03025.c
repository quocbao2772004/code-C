#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int dem=0;
int arr[100001];
int luu;
int test;int n,m;
int tong=0;int luui;
int luuj;int tongj=0;
int ktnt(int n)
{
    if(n<2)return 0;
    f(i,2,sqrt(n))
    if(n%i==0)return 0;
    return 1;
}
int kt(int n)
{
    int tcs=0;
    //if(ktnt(n)==0)return 0;
    while(n>0)
    {
        int k=n%10;
        if(k!=2&&k!=5&&k!=3&&k!=7)return 0;
        tcs+=n%10;
        n/=10;
    }
    return ktnt(tcs);
}
int main()
{
   // freopen("d.inp","r",stdin);
   // freopen("d.out","w",stdout);
   //snt(100000);
   scanf("%d",&test);
    while(test--)
   {
      dem=0;
      scanf("%d%d",&n,&m);
      f(i,n,m)
      if(kt(i)==1)
      if(ktnt(i))dem++;
      printf("%d\n",dem);
   }
}