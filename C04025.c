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
        if(a[i]%2==0)
        {
            u++;
            b[u]=a[i];
        }
        else 
        {
            h++;
            c[h]=a[i];
        }
    }
    f(i,1,u-1)
    {
        f(j,i+1,u)
        if(b[i]>b[j])
        {
            int tam=b[i];b[i]=b[j];b[j]=tam;
        }
    }
    f(i,1,h-1)
    {
        f(j,i+1,h)
        if(c[i]>c[j])
        {
            int tam=c[i];c[i]=c[j];c[j]=tam;
        }
    }
    f(i,1,u)printf("%d ",b[i]);
    f(j,1,h)printf("%d ",c[j]);
   
   
    return 0;
}
