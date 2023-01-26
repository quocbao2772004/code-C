#include<stdio.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int arr[1000001];
int maxx(int a,int b)
{
    return a>b?a:b;
}
int minn(int a,int b)
{
    return a<b?a:b;
}
int kt(int n)
{
    int t=1;
    f(i,2,sqrt(n))
    if(n%i==0)
    {
        if(i==n/i)t+=i;
        else t=t+i+n/i;
    }
    return t!=n||n<2?0:1;
}
int a,b;
int x=1000001;
int dem;
int main()
{

    int n;int i=2;
    scanf("%d%d",&a,&b);
    int mi=minn(a,b);
    int ma=maxx(a,b);
    f(i,mi,ma)
    {
        if(kt(i))printf("%d ",i);
    }


    //printf("%d",kt(n));
    return 0;
}
