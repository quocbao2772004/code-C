#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[100001],b;
int arr[100001];
int luu;
int main()
{
    int n;
    scanf("%d",&n);
    luu=n;
     f(i,1,n)
     {
       scanf("%d",&a[i]);
       arr[a[i]]++;
       if(arr[a[i]]==2)luu--;
       if(arr[a[i]]>=2)luu--;
     }
     printf("%d\n",luu);
     f(i,1,n)
     if(arr[a[i]]==1)
     printf("%d ",a[i]);
    return 0;
}
