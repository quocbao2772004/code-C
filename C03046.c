#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int poww(int n,int k)
{
    int t=1;
    f(i,1,k)t=t*n;
    return t;
}
int arr[1000001];
int kt(int n)
{
    int tcs=0;
    int sd=0;
    int luu=n;
  while(n>0)
  {
      sd=sd*10+n%10;
      tcs=tcs+n%10;
      if(n%10==4)return 0;
      n/=10;
  }
  return tcs%10==0&&sd==luu?1:0 ;
}
int a,b;
int main()
{
    int n;int i=2;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%d",&a);
        f(j,poww(10,a-1),poww(10,a))
        if(kt(j))printf("%d ",j);
        printf("\n");       
    }


    //printf("%d",kt(n));
    return 0;
}
