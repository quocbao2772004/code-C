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
char s[101][101];
char x[1001];
int mi=999999,ma=0;
int t;int d;
int check(char s[],char ans[])
{
   char x1[1001]={};
    f(i,0,strlen(s)-1)
    {
       int u=0;
        if(s[i]==ans[0])
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
            if(strcmp(x1,ans)==0)return i;
        }
    }
   return -1;
}
int main()
{
   
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%s",s[i]);
    }
 
    f(i,1,n)
    {
        int t=0;
        f(j,1,n)
        {
            if(i!=j)
            {
                int luu=check(s[j],s[i]);
               
                if(luu==-1){printf("-1");return 0;}
                 t+=luu;
            }
        }
        if(mi>t)
        {
            mi=t;
            
        }
    }
    printf("%d",mi);
    return 0;
}
