#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int a[10001];
int n,m;int luu;int dem;
int b[10001];
int k;
int test;
int u;
int d=999999;
int maxx(int n,int m)
{
    return n>m?n:m;
}
int main()
{
    scanf("%d%d",&n,&m);
    f(i,1,n)
    {
        int dem=0;
        if(i<=m)
        {
            f(j,i,m)
           {
            printf("%c",j+63);dem++;
            
           }
        }
        else {printf("%c",m+63);dem++;}
        
        while(dem<m)
        {
            printf("%c",m+63);
            dem++;
        }
        printf("\n");
        
    }
    
    
    return 0;
}
