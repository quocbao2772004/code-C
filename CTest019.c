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
        scanf("%d%d%d",&n,&m,&k);
        f(i,1,n)
        {
            f(j,1,m)
            {
                scanf("%d",&a[i][j]);
                if(j==k)dd[i]=a[i][j];
            }
        }
        f(i,1,n-1)
        {
            f(j,i+1,n)
            {
                if(dd[i]>dd[j])
                {
                    int t=dd[i];dd[i]=dd[j];dd[j]=t;
                }
            }
        }
        f(i,1,n)
        {
            f(j,1,m)
            {
                if(j==k)printf("%d ",dd[i]);
                else printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
