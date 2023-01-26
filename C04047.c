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
int a[100001];
int b[100001];
int dem;
int n;
void swap(int *a,int *b)
{
    int t=*a;*a=*b;*b=t;
}
int main()
{
   //  freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
   
        
        scanf("%d",&n);
        f(i,1,n)scanf("%d%d",&a[i],&b[i]);
        int ma=0;
        f(i,1,n-1)
        {
            f(j,i+1,n)
            if(a[i]>a[j]){swap(&a[i],&a[j]);swap(&b[i],&b[j]);}
        }
        f(i,1,n)
        {
            ma=(ma>a[i]?ma:a[i]);
            ma+=b[i];
        }
        //f(i,1,n)printf("%d %d\n",a[i],b[i]);
        printf("%d",ma);

    return 0;
}
