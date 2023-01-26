#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int check(char s[20],char x[20])
{
    char a[50],b[50];
    strcpy(a,s);strcpy(b,x);
    strcat(a,x);strcat(b,s);
    if(strcmp(a,b)>=0)return 1;
    return 0;
}
struct giai
{
    int stt;
    char xau[20];
};
int test;int n;
int main()
{
   // fi;fo;
    struct giai a[20];

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        f(i,1,n)
        {
            scanf("%s",a[i].xau);
        }
        f(i,1,n-1)
        {
            f(j,i+1,n)
            {

                if(check(a[i].xau,a[j].xau))
                {
                    char x[20];
                    strcpy(x,a[i].xau);
                    strcpy(a[i].xau,a[j].xau);
                    strcpy(a[j].xau,x);
                }
            }
        }
        f(i,1,n)
        printf("%s",a[i].xau);
        printf("\n");

    }
    return 0;
}


