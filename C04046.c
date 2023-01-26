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
char s[10001],x[10001];
ll a[100001];
char b[101][101];
int dem;
int n;
void quicksort(int l,int r,ll a[])
{
    int mid=(l+r)/2; 
    ll chot=a[mid];
    int i=l;int j=r;
    while(i<j)
    {
        while(a[i]<chot)i++;
        while(a[j]>chot)j--;
        if(i<=j)
        {
           ll t=a[i];a[i]=a[j];a[j]=t;
            i++;j--;
        }
    }
    if(i<r)quicksort(i,r,a);
    if(l<j)quicksort(l,j,a);
}
int main()
{
   //  freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%d",&test);
    f(k,1,test)
    {
        ll mi=99999999999;int dem=0;
        scanf("%d",&n);
        
        f(i,1,n)scanf("%lld",&a[i]);
        quicksort(1,n,a);
        //printf("%d\n",n+1);
        f(i,1,n-1)
        {
            if(a[i+1]-a[i]<mi)
            {
                mi=a[i+1]-a[i];
            }
        }
        f(i,1,n-1)
        {
            if(a[i+1]-a[i]==mi)dem++;
        }
        printf("%lld %d",mi,dem);
        //f(i,1,n)
      //  printf("%d ",a[i]);
        printf("\n");
    }

    return 0;
}
