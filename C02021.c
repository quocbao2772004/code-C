#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n,m;
char s[1000];
ll so;
char x[100];
int a[10001];
int k,d;
int main()
{
    scanf("%d",&n);
    int d=1;
    f(i,1,n)
    {
        int luu=i;k=n-1;
        printf("%d ",i);
        f(j,2,i)
        {
            luu+=k;
            printf("%d ",luu);
            k--;
        }
        
       
        printf("\n");

    }
    return 0;
}
