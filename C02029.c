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
     d=64;
    f(i,1,n)
    {
        int k=n-1;
        printf("%c ",i+64);
        luu=i+64+k;
        f(j,2,i)
        {
            
              printf("%c ",luu);
              k--;luu+=k;
        }
        printf("\n");
      
    }
    return 0;
}
