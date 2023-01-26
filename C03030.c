#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int arr[1000001];
void print(int n)
{
    f(h,1,n)printf("%d",arr[h]);
    printf(" ");
}
int try(int i,int n,int k)
{
     f(j,k,9)
     {
        arr[i]=j;
        if(i==n)print(n);
        else try(i+1,n,j);
     }
}
int main()
{
    int n;int m;
  
    scanf("%d",&n);
    f(i,1,n)
    {
         scanf("%d",&m);
         try(1,m,1);
         printf("\n");
    }
    
    return 0;
}