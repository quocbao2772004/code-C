#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)

struct giai
{
    int stt;
    int length;
    char xau[1001];
    int solan;
};
int test;int n;
int u=0;char s[1001];int m;
int main()
{
    //fi;fo;
    struct giai a[1001];
    while(scanf("%s",s)!=-1)
    {
        int ok=1;
        f(i,1,u)
        {
            if(strcmp(a[i].xau,s)==0){a[i].solan++;ok=0;break;}
        }
        if(ok==0)continue;
        u++;
        strcpy(a[u].xau,s);
        a[u].length=strlen(s);a[u].solan=1;
        m=m>strlen(s)?m:strlen(s);
    }
    f(i,1,u)
    {
        if(a[i].length==m)printf("%s %d %d\n",a[i].xau,a[i].length,a[i].solan);
    }
    return 0;
}


