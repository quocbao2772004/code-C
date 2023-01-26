#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[10001];
int n,m;int luu;
int b[10001];
int k;
int test;
int u;
int d=999999;
void quicksort(int left,int right)
{
    int mid=(left+right)/2;
    int khoa=a[mid];
    int i=left,j=right;
    while(i<=j)
    {
       while(a[i]<khoa)i++;
       while(a[j]>khoa)j--;
       if(i<=j)
       {
         int tam=a[i];
         a[i]=a[j];
         a[j]=tam;
         i++;j--;
       }
    }
    if(i<right)quicksort(i,right);
    if(left<j)quicksort(left,j);

}
void in()
{
    f(i,1,2)printf("%d ",a[i]);
}
int main()
{
    int d2=99999;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%d",&a[i]);
        if(a[i]<d)d=a[i];
    }
    printf("%d ",d);
    f(i,1,n)
    {
        if(a[i]<d2 &&a[i]>d)d2=a[i];
    }
    printf("%d",d2);
    return 0;
}
