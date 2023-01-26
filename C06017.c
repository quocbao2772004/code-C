#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n;
char s[1001],x[1001],a[101][101];
char b[101][101];int c[10001];
int test;
int k=-1;
int u=-1;

int main()
{
    gets(s);gets(x);
    char *t1=strtok(s," ");
    while(t1!=NULL)
    {
        u++;strcpy(a[u],t1);
        t1=strtok(NULL," ");
    }
    char *t2=strtok(x," ");
    while(t2!=NULL)
    {
        k++;strcpy(b[k],t2);
        t2=strtok(NULL," ");
    }
    f(i,0,u-1)
    {
        f(j,i+1,u)
        {
             if(strcmp(a[i],a[j])>0)
            {
                char t[1001];
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    f(i,0,u-1)
    {
        f(j,i+1,u)
        {
             if(strlen(a[i])==strlen(a[j]))
            {
                if(strcmp(a[i],a[j])==0)c[j]=1;
            }
        }
    }
    f(i,0,u)
    {
        int ok=1;
        f(j,0,k)
        {
            if(strlen(a[i])==strlen(b[j]))
            {
                if(strcmp(a[i],b[j])==0)
                {
                    ok=0;break;
                }
            }
        }
        if(ok==1&&c[i]==0)printf("%s ",a[i]);
    }
    
   
    return 0;
}
