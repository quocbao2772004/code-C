#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int arr[1000001];
int a,b;
int main()
{
    int n;int i=2;
    scanf("%d",&n);
    f(i,1,n-1)
    {
       scanf("%d%d",&a,&b);
       arr[a]++;
       arr[b]++;
    }
    f(i,1,n)
    if(arr[i]==n-1){printf("Yes");return 0;}
     printf("No");

    //printf("%d",kt(n));
    return 0;
}
