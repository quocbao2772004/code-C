#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int test;
int gm,gb;
int n;int sum;
int b[10001];

ll dd[10001];
int a[10001];
int main()
{
     //fi;fo;
    scanf("%d",&test);
    f(k,1,test)
    {
        f(i,1,10000)b[i]=1;
        scanf("%d",&n);int m=1;
        f(i,1,n)scanf("%d",&a[i]);
        printf("Test %d:\n",k);
        f(i,1,n-1)
        {
            f(j,i,n-1)
            {
                if(a[j]<a[j+1])b[i]++;
                else
                    {
                        m=m>b[i]?m:b[i];
                        //printf("b[i]=%d m=%d\n",b[i],m);
                        i=j;
                        break;
                    }
            }
        }
        printf("%d\n",m);
        f(i,1,n)
        {
            if(b[i]==m)
            {
                f(j,i,i+m-1)printf("%d ",a[j]);
                printf("\n");
                i=i+m-1;
            }
        }

    }
    return 0;
}
