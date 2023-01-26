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
int kt(ll n)
{
    int cs=0;ll luu=n;
    while(n>0)
    {
        cs=cs*10+n%10;
        if(n%10==9)return 0;
        n/=10;
    }
    return cs==luu?1:0;
}
void snt(ll n)
{
    int dem=0;
    f(i,2,n)
    if(kt(i)){printf("%d ",i);dem++;}
   
        printf("\n");
        printf("%d",dem);

}
int main()
{
    
    scanf("%d",&n);
   snt(n);
   



    return 0;
}
