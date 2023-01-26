#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[101101],b[101101];
int dd[200001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    f(i,1,n)
    {
        scanf("%d",&a[i]);
        dd[a[i]]=1;
    }
    f(i,1,m)
    {
        scanf("%d",&b[i]);
        if(dd[b[i]]==1)dd[b[i]]=2;
        if(dd[b[i]]==0)dd[b[i]]=3;
    }
    f(i,1,1000)
    if(dd[i]==2)printf("%d ",i);
    printf("\n");
    f(i,1,1000)
    if(dd[i]==1)printf("%d ",i);
    printf("\n");
    f(i,1,1000)
    if(dd[i]==3)printf("%d ",i);
    
    
    
   
    return 0;
}
