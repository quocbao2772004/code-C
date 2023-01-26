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
int t;int d;
int dd[1001];
int main()
{
    //fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        f(i,0,10)dd[i]=0;
        scanf("%s",s);
        f(i,0,strlen(s)-1)
        {
            dd[s[i]-'0']++;
        }
        f(i,1,9)
        if(dd[i]>0)
        {
            f(j,1,dd[i])
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
