#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
int test;
char s[1001];
char x[1001];

struct so
{
    //int stt;
    int th1;
    int th2;
    int th3;
    int th4;
    int th5;
    int th6;
    int th7;
};
int gm,gb;float m;
int n;int sum;
struct so a;
int main()
{
    // freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%s",s);
    f(i,0,strlen(s)-1)
    {
        if(s[i]=='(')a.th1++;
        else if(s[i]==')')a.th2++;
        else if(s[i]=='[')a.th3++;
        else if(s[i]==']')a.th4++;
        else if(s[i]=='{')a.th5++;
        else if(s[i]=='}')a.th6++;
        else if(s[i]=='"')a.th7++;
    }
   // printf("%d %d %d %d %d %d %d\n",a.th1,a.th2,a.th3,a.th4,a.th5,a.th6,a.th7);
   if(a.th1==a.th2&&a.th3==a.th4&&a.th5==a.th6&&a.th7%2==0)printf("1");
   else printf("0");
    return 0;
}
