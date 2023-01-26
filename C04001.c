#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int a,b;
int arr[10001];
int main()
{
    int n;
    scanf("%d",&n);
     f(i,1,n)
     {
        scanf("%d",&a);
        f(j,1,a)
        {
            scanf("%d",&arr[j]);
            if(arr[j]%2==0)printf("%d ",arr[j]);
        }
        printf("\n");
     }
    return 0;
}
