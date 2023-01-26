#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void quicksort(int l,int r,int a[])
{
    int m=(l+r)/2;
    int key=a[m];
    int i=l,j=r;
    while(i<=j)
    {
        while(a[i]<key)i++;
        while(a[j]>key)j--;
        if(i<=j)
        {
            swap(&a[i],&a[j]);
            i++;j--;
        }
    }
    if(i<r)quicksort(i,r,a);
    if(l<j)quicksort(l,j,a);

}
int binase(int l,int r,int a[],int key)
{
    if(l==r&&key!=a[l])return 0;
    int m=(l+r)/2;
    int chot=a[m];
    if(key==chot)return m;
    if(key>chot)return binase(m+1,r,a,key);
    if(key<chot)return binase(l,m-1,a,key);
}
int solve(int b[],int n)
{
    long long a[n];
    for(int i = 1; i <= n; i ++)
    a[i] = (long long)b[i] * b[i];
    for(int i = n; i >= 3; i --)
    {
        int l = 1, r = i -1;
        while(l<=r)
      {
          if(a[i] == a[l]+a[r]) return 1;
          if(a[i] > a[l]+a[r]) l++;
          else r --;
          }
    }
    return 0;
}
int test;int n;
int u=0;char s[1001];int m;
int a[50001];
int main()
{
    //fi;fo;
    //scanf("%d",&n);
    //f(i,1,n)scanf("%d",&a[i]);
   // quicksort(1,n,a);
    //f(i,1,n)printf("%d ",a[i]);
    scanf("%d",&test);
    while(test--)
    {
        //int sum=0;
        int z=0;//int d=0;
        scanf("%d",&n);
        f(i,1,n)scanf("%d",&a[i]);
        quicksort(1,n,a);
        if(solve(a,n)==1)printf("YES\n");
        else printf("NO\n");
        /*f(i,1,n)printf("%d ",a[i]);
        printf("\n");*/
        //f1(i,n,3)


    }
    return 0;
}


