#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int dd[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int a[100001];
int n;
int dem;
int main()
{
    
        scanf("%d",&n);
        f(i,1,n)
        {
            scanf("%d",&a[i]);
          
            dd[a[i]]++;
        }
        dem++;
     
        f(i,1,n)
        if(dd[a[i]]>=1)
        {
            printf("%d %d\n",a[i],dd[a[i]]);
            dd[a[i]]=0;
        }
     
    
   
    
   
    return 0;
}
