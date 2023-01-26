#include<stdio.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
void check(int n)
{
    int ans=0;
    f(i,1,sqrt(n))
    if(n%i==0)
    {
        if(i==n/i)
        {
            if(i%2==0)ans++;
        }
       else 
       {
        if(i%2==0)ans++;
        if(n/i%2==0)ans++;
       }
    }
    printf("%d\n",ans);
}
ll a,b;
int main()
{
    int n;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%lld",&a);
        check(a);
    }


    //printf("%d",kt(n));
    return 0;
}
