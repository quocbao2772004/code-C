#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n;int sum;
char b[1005][1005];
int a[1005];
char s[1005];
int check(char s[])
{
    int i=0;
    int j=strlen(s)-1;
    while(i<=j)
    {
        if(s[i]!=s[j])return 0;
        i++;j--;
    }
    return 1;
}
int u;
int m=0;
int main()
{
     //fi;fo;


    while(scanf("%s",s)!=-1)
    {
        if(check(s))
        {
            m=m>strlen(s)?m:strlen(s);
            int luu=-1;
            f(i,0,u-1)
            {
                if(strcmp(b[i],s)==0)
                {
                    luu=i;break;
                }
            }
            if(luu!=-1)
            {
                a[luu]++;
            }
            else
            {
                strcpy(b[u],s);
                a[u]=1;
                u++;
            }


            //printf("%s\n",s);
        }
    }

    f(i,0,u-1)
    {
        if(strlen(b[i])==m)printf("%s %d\n",b[i],a[i]);
    }
    //printf("%d",m);
    //printf("%d",ans);

    return 0;
}
