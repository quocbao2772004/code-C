#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n;
int a[5005],b[5005];
int test;
double ans;int ma;
char s[1001],x[1001],d[1001];
int l[10001];
void lam()
{
    scanf("%s",&s);
    int ans=0;
   /* f(i,0,strlen(s)-1)
    printf("%c ",s[i]);printf("\n");*/
    f(i,0,strlen(s)-1)
    {
        ma=0;
        f(j,0,i)
        {
            if(s[j]<s[i]&&ma<l[j])
                ma=l[j];
        }
        l[i]=ma+1;
       // printf("%d ",l[i]);
        ans=ans>l[i]?ans:l[i];
    }
    printf("%d",26-ans);
}
int main()
{
    //fi;fo;
    lam();
}
