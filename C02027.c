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
int k,d=97;
int main()
{
    scanf("%d",&n);
     d=97;
    f(i,1,n)
    {
        int luu=i;k=0;
        f(j,1,i)
        {
            a[k]=(char)d;
            d++;k++;
        }
        if(i&1==1)
        {
            f(h,0,i-1)printf("%c ",a[h]);
        }
        else f1(h,i-1,0)printf("%c ",a[h]);
        printf("\n");

    }
    return 0;
}
