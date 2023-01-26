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
double mi=999999,ma=0;
double t;int d;
int check(char s[],char ans[])
{
   char x1[1001]={};
    f(i,0,strlen(s)-1)
    {
       int u=0;
        if(s[i]-'0'==ans[0]-'0')
        {
            f(j,i,strlen(s)-1)
            {
                x1[u]=s[j];
                u++;
            }
            f(j,0,i-1)
            {
                x1[u]=s[j];
                u++;
            }
            if(strcmp(x1,ans)==0)return 1;
        }
    }
   return 0;
}
void nhan1(char a[],long long  b)
{
     char c[1001]={};char d[1001]={};
     int nho=0;
     ll tich=1;
     f1(i,strlen(a)-1,0)
     {
         f(i,0,60)d[i]='\0';
        tich=(a[i]-'0')*b+nho;
        nho=tich/10;
        d[0]=tich%10+'0';
        strcat(d,c);
        strcpy(c,d);
     }
     if(nho>0)
     {
         f(i,0,60)d[i]='\0';
        d[0]=nho+'0';
        strcat(d,c);
        strcpy(c,d);
     }
    if(check(c,a))printf("YES\n");
    else printf("NO\n");
}
int main()
{
    //fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",s);
        nhan1(s,2);
    }

    return 0;
}
