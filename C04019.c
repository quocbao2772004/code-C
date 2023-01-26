#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[100001];
int n,m;int luu;int dem;
int b[100001];
int k;
int test;
int u;
int d=999999;

int main()
{
    scanf("%d",&test);
    while(test--)
    {
        dem=0;m=0;
    scanf("%d",&n);
    f(i,1,n)
    {
         scanf("%d",&a[i]);
         b[a[i]]++;
         if(m<b[a[i]])m=b[a[i]];
    }
    f(i,1,n)
    {
        if(b[a[i]]==m)
        {
            printf("%d ",a[i]);
            b[a[i]]=0;
        }
        else b[a[i]]=0;
    }
    printf("\n");
    
    }
   
    
    return 0;
}
