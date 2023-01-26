#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
 //V=5; X=10; L=50; C=100;D=500; M=1000
int check(char s)
{
    if(s=='I')return 1;
    if(s=='V')return 5;
    if(s=='X')return 10;
    if(s=='L')return 50;
    if(s=='C')return 100;
    if(s=='D')return 500;
   return 1000;

}
int test;int n;
int u=0;char s[1001];int m;
int a[1001];
int main()
{
   // fi;fo;
    scanf("%d",&test);
    while(test--)
    {
        int sum=0;
        scanf("%s",s);
        f(i,0,strlen(s)-1)
        {
            a[i]=check(s[i]);
        }
        f(i,1,strlen(s)-1)
        {
            if(a[i-1]<a[i])sum=sum-a[i-1];
            else sum+=a[i-1];
        }
        sum+=a[strlen(s)-1];
        printf("%d\n",sum);
    }
    return 0;
}


