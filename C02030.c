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
char a[10001];
int k,d;int luu;
int main()
{
    scanf("%d",&n);
     d=64;int k=1;
    f(i,1,n)
    {
        luu=k;int dem=1;
        f(j,1,i)
        {
            printf("%c",dem+63);
            dem+=2;
        }
        while(k>1)
        {
            k-=2;
            printf("%c",k+63);
        }
        k=luu+2;
        printf("\n");
      
    }
    return 0;
}
