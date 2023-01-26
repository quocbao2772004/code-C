#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int a[10001];
int n,m;int luu;
int b[10001];
int dd[10001];
int k;
int test;int dem;
int u;
int d=-999999;
int main()
{
    int d2=-99999;
    
        int ma=-9999;u=0;
       scanf("%d",&n);
       f(i,1,n)
       {
        scanf("%d",&a[i]);  
        b[a[i]]++; 
        if(b[a[i]]>1)
        {
            if(dd[a[i]]==0){dem++;dd[a[i]]=1;}
            
        }
        
       }
       printf("%d\n",dem);
       f(i,1,n)
       {
        if(b[a[i]]>1){printf("%d ",a[i]);b[a[i]]=1;}
       }
       
       
  
    return 0;
}
