#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int ktnt(int n)
{
    if(n<2)return 0;
    f(i,2,sqrt(n))
    if(n%i==0)return 0;
    return 1;
}
int dd[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int a[100001];
int n;
int dem;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        f(i,1,n)
        {
            scanf("%d",&a[i]);
            if(ktnt(a[i])==1)
            dd[a[i]]++;
        }
        dem++;
        printf("Test %d:\n",dem);
        f(i,1,100000)
        if(dd[i]>=1)
        {
            printf("%d xuat hien %d lan\n",i,dd[i]);
            dd[i]=0;
        }
     
    }
   
    
   
    return 0;
}
