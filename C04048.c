#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n;int sum;
int b[10001];
ll dd[10001];
int a[10001];
int m,k;int x;int u;
int count,ans;
int main()
{
     //fi;fo;
    scanf("%d%d%d",&n,&m,&k);
    f(i,1,n)a[i]=0;
    f(i,1,m)
    {
        scanf("%d",&x);
        int g=x-k>1?x-k:1;
        f(j,g,x+k)
        {
            if(j>=0)
            a[j]=1;
        }
    }
    if(k==0){printf("%d",n-m);return 0;}
    f(i,1,n)
    {
        if(a[i]==0)
        {
            u++;b[u]=i;
        }
    }
   // f(i,1,u)printf("%d ",b[i]);printf("\n");
    count=1;
    f(i,1,u-1)
    {
        if(b[i]+1==b[i+1])count++;
        else
        {
            int x=count/(2*k+1);
            if(x*(2*k+1)!=count)x++;
            ans+=x;
            count=1;
        }
    }
    if(count>1||(b[u]-1!=b[u-1])&&u>0)
    {
        int x=count/(2*k+1);
            if(x*(2*k+1)!=count)x++;
            ans+=x;
    }
    printf("%d",ans);

    return 0;
}
