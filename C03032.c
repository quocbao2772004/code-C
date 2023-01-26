#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int snt(int n)
{
    if(n<2)return 0; 
    f(i,2,sqrt(n))
    if(n%i==0)return 0;
    return 1;
}
int check(int n)
{
    if(!snt(n))return 0;
    while(n>0)
    {
        if(!snt(n%10))return 0;
        n/=10;
    }
    return 1;
}
int a,b;
int main()
{
    int n;int k=0;int h=0;int m;
    char s[10001];
    scanf("%d",&n);
    f(i,1,n)
    {
         scanf("%d%d",&a,&b);
         int d=0;
        f(j,a,b)
        {
            if(check(j))
        d++;
        }
        
        printf("%d\n",d);
    }
    
    return 0;
}