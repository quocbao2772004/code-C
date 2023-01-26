#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int check(int n)
{
    int luu=n%10;
    while(n>0)
    {
        if(n%10>luu)return 0;
        luu=n%10;
        n/=10;
    }
    return 1;
}
int mu(int n,int k)
{
    int mu=1;
    f(i,1,k)mu=mu*n;
    return mu;
}
void sol()
{
    int m;
    scanf("%d",&m);
    int k=mu(10,m-1);int h=mu(10,m)-1;
    f(i,k,h)
    if(check(i))printf("%d ",i);
    printf("\n");
}

int main()
{
    int n;
  
    scanf("%d",&n);
    f(i,1,n)
    {
         sol();
    }
    
    return 0;
}