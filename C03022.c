#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
ll n,m;
char s[1000];
ll so;
char x[100];
long long a[100001];
int t;
int tcs(ll n)
{
    int cs=0;
    while(n>0)
    {
        cs+=n%10;
        n/=10;
    }
    return cs%5==0?1:0;
}
void snt(ll n)
{
    int dem=0;
    f(i,2,n)a[i]=1;
    f(i,2,n)
    {
        if(a[i])
        for(int j=i*2;j<=n;j+=i)a[j]=0;
    }
    f(i,2,n)
    if(a[i]&tcs(i)==1)
    {
        printf("%d ",i);dem++;
    }
        printf("\n");
        printf("%d",dem);

}
int main()
{
    
    scanf("%d",&n);
   snt(n);
   



    return 0;
}
