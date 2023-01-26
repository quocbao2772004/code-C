#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n,m;

char s[1000];
ll so;

int main()
{
   int i=-1;
    scanf("%d",&n);
    if(n==0){printf("0");return 0;}
    while(n>0)
    {
        i++;
        if(n%2==0)s[i]='0';
        else s[i]='1';
        n/=2;
    }
    f1(j,i,0)
    printf("%c",s[j]);
    return 0;
}
