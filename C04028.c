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
char b[10001];
int dem;
int n;
int main()
{
   scanf("%d",&n);
   f(i,1,n)scanf("%d",&a[i]);
   printf("Buoc 0: %d \n",a[1]);
  // int k=a[1];
   f(i,2,n)
   {
     int k=a[i];
     int j=i-1;
     while(j>=1&&a[j]>k)
     {
      a[j+1]=a[j];
      j--;
     }
     a[j+1]=k;dem++;
     printf("Buoc %d: ",dem);
     f(g,1,i)printf("%d ",a[g]);printf("\n");
   }
  // f(i,1,n)printf("%d ",a[i]);
   
    return 0;
}
