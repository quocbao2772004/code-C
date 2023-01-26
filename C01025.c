#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int x[10],y[10];
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
void nhap()
{
    int xmax=0,xmin=999999;
     int ymax=0,ymin=999999;
    f(i,1,4)
    {
        scanf("%d%d",&x[i],&y[i]);
        xmax=max(xmax,x[i]);
        xmin=min(xmin,x[i]);
        ymax=max(ymax,y[i]);
        ymin=min(ymin,y[i]);
    }
    int ans=max(pow(xmax-xmin,2),pow(ymax-ymin,2));
    printf("%d",ans);

}
int main()
{
    //fi;fo;
    nhap();

}
