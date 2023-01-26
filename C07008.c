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
   // char dathuc1[1001];
   // char dathuc2[1001];
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
char s[1001];
char x[1001];
int main()
{
     //fi;fo;
    scanf("%d",&test);
    struct so a[10001];
    getchar();
    while(test--)
    {
        gets(s);
        gets(x);int u=0;
        char *token=strtok(s," + ");
        while(token!=NULL)
        {
            strcpy(b[u],token);u++;
            token=strtok(NULL," + ");
        }
        char *toke=strtok(x," + ");
        while(toke!=NULL)
        {
            strcpy(b[u],toke);u++;
            toke=strtok(NULL," + ");
        }
        //f(i,0,u-1)printf("%s\n",b[i]);
        int v=0;
        f(i,0,u-1)
        {
            int ok=1;
            char *token=strtok(b[i],"^");
            token=strtok(NULL,"^");
            char *token1=strtok(b[i],"*");
            ll t1=chuyen(token1);
            ll t=chuyen(token);
            f(j,1,v)
            {
                if(a[j].somu==t){a[j].heso+=t1;ok=0;break;}
            }
            if(ok==0)continue;
            v++;a[v].somu=t;a[v].heso=t1;
        }
        f(i,1,v-1)
        {
            f(j,i+1,v)
            {
                if(a[i].somu<a[j].somu)
                {
                    int t=a[i].somu;a[i].somu=a[j].somu;a[j].somu=t;
                    int g=a[i].heso;a[i].heso=a[j].heso;a[j].heso=g;
                }
            }
        }
        f(i,1,v-1)
        {
            printf("%d*x^%d + ",a[i].heso,a[i].somu);
        }
        printf("%d*x^%d",a[v].heso,a[v].somu);
        printf("\n");


    }
    return 0;
}
