#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int test;
struct so
{
    int stt;
    int somu;
    int heso;
};
ll chuyen(char s[1001])
{
    ll t=0;int dau;
    if(s[0]!='-')dau=0;
    else dau=1;
    f(i,dau,strlen(s)-1)
    {
        t=t*10+(s[i]-'0');
    }
    return dau==0?t:-t;
}
int gm,gb;float m;
int n;int sum;
char b[101][101];
char c[101][101];
char d[101][101];
ll dd[10001];

char x[1001];
double xa,ya,xb,yb,xc,yc;
int main()
{
     //fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
        double ab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        double ac=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
        double bc=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
        //printf("%lf %lf %lf",ab,bc,ac);
        if(ab+ac<=bc){printf("INVALID\n");continue;}
        if(ab+bc<=ac){printf("INVALID\n");continue;}
        if(ac+bc<=ab){printf("INVALID\n");continue;}
        //double p=(double)ab+ac+bc;
        double a=bc,b=ac,c=ab;
        double s=a+b+c;

        printf("%.3lf\n",(double)s);
    }
    return 0;
}
