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
int a[10001];
char b[101][101];
int dem;
int n;
int main()
{
   scanf("%d",&n);
   f(i,1,n)scanf("%d",&a[i]);
   f(i,1,n-1)
   {
    int mi=i;dem++;
    f(j,i+1,n)
     {
        if(a[j]<a[mi])mi=j;
     }
     int t=a[i];a[i]=a[mi];a[mi]=t;
    // printf("Buoc %d: ",dem);
     f(k,1,n)printf("%d ",a[k]);printf("\n");
   }
   
    return 0;
}
