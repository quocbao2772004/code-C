#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n,m,p,k;
int test;
char s[1001];
char x[1001];
int mi=999999,ma=0;
int t;int d;int a[101][101],b;
int dd[1001];
int main()
{
    //fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",s);
        f(i,0,strlen(s)-1)
        {
            dd[s[i]-'A']++;
        }
        f(i,0,strlen(s)-1)
        {
            if(dd[s[i]-'A']>0)
                printf("%c%d",s[i],dd[s[i]-'A']);
            dd[s[i]-'A']=0;
        }
        printf("\n");

    }
    return 0;
}
