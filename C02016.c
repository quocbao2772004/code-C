#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[10001];
int n,m;int luu;
int b[10001];
int k;
int test;
int u;
int d=999999;

int main()
{
    int d2=99999;
    scanf("%d",&n);
    k=1;
    f(i,1,n)
    {
       if(i%2!=0)
       {
        int luu=i;int so=1;
         while(luu>0)
         {
            printf("%d",so);
            so+=2;
            luu--;
         }
       }
       else 
       {
        int luu=i;int so=2;
         while(luu>0)
         {
            printf("%d",so);
            so+=2;
            luu--;
         }
       }
       printf("\n");
    }
    
    return 0;
}
