#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int test;

ll n=9999999,m=9999999;
 int  c[101][101];
ll dd[10001];int dem;
ll a,b;int lmax;
int main()
{
     //fi;fo;
    scanf("%d",&test);

    //getchar();
    f(k,1,test)
    {
        scanf("%d%d",&a,&b);
        m=m<a?m:a;
        n=n<b?n:b;
       

    }
        //printf("m=%d n=%d\n",m,n);
    
        printf("%lld",m*n);
    return 0;
}
