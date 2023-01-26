#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
char s[100001];
void nhap()
{
    scanf("%s",s);
}
void lam(int pos)
{
    int n=strlen(s)-1;
    int d=1;char ma='\0';int vt=0;
    f(i,pos,n)
    {
        if(s[i]>ma){ma=s[i];d=1;vt=i;}
        else if(s[i]==ma){d++;vt=i;}
    }
    f(i,1,d)printf("%c",ma);
    if(pos<n)lam(vt+1);
}
int main()
{
    //fi;fo;
    nhap();
    lam(0);
}
