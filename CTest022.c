#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n,m,p;
int test;
char s[1001];
char x[1001];
int mi=999999,ma=0;
int t;int d;ll a,b;
int dd[1001];
ll bcnn(ll a,ll b)
{
    ll c=a*b;
    while(b!=0)
    {
        ll r=a%b;
        a=b;b=r;
    }
    return c/a;
}
int main()
{
    //fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",s);
        a=0;b=0;
        if(strlen(s)%2!=0){printf("INVALID\n");continue;}
        f(i,0,strlen(s)/2-1)
        {
            a=a*10+(s[i]-'0');
        }
        f(i,strlen(s)/2,strlen(s)-1)
        {
            b=b*10+(s[i]-'0');
        }
        printf("%lld\n",bcnn(a,b));
    }
    return 0;
}
