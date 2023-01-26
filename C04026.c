#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[10001];
int n,m;int luu;
int b[10001];int c[10001];
int k;
int test;
int u=0;int h=0;
int d=-999999;
int main()
{
    int d2=-99999;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%d",&a[i]);
        
    }
    f(i,1,n-1)
    {
        f(j,i+1,n)
        if(a[i]>a[j])
        {
            int tam=a[i];a[i]=a[j];a[j]=tam;
        }
        printf("Buoc %d: ",i);
        f(k,1,n)printf("%d ",a[k]);
        printf("\n");
    }
   
   
    return 0;
}
