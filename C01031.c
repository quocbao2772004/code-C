#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
char s[1001];
int dem;int n,nt;
int a[100001];int u=1;
int main()
{
    scanf("%d",&n);
    nt=2;
    while(n>1)
    {
        while(n%nt==0)
        {
           printf("%d",nt);
           
            n/=nt;if(n>1)printf("x");
        }
        nt++;
    }
   // if(n>1)printf("%d",n);
   /* if(dem!=1)
    {
        f(i,1,u-2)printf("%dx",a[i]);
        printf("%d",a[u-1]);
    }
    else 
    {
        f(i,1,u-1)printf("%dx",a[i]);
        printf("%d",a[u]);*/
    //}
  
   
    return 0;
}
