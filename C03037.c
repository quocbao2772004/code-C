#include<stdio.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)

ll a,b;
int dem2,dem3,dem5,dem7;
int main()
{
    ll n;int i=2;
    scanf("%lld",&n);
    while(n>0)
    {
        switch(n%10)
        {
            case 2:dem2++;break;
            case 3:dem3++;break;
            case 5:dem5++;break;
            case 7:dem7++;break;
        }
        n/=10;
    }
    if(dem2>0)printf("%d %d\n",2,dem2);
    if(dem3>0)printf("%d %d\n",3,dem3);
    if(dem5>0)printf("%d %d\n",5,dem5);
    if(dem7>0)printf("%d %d\n",7,dem7);

    //printf("%d",kt(n));
    return 0;
}
