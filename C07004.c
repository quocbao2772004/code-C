#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int ucln(int a,int b)
{
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
char s[1001];
int dem=0;
int a,b,c,d;
int main()
{
    scanf("%d",&test);
   f(k,1,test)
    {   
         scanf("%d%d%d%d",&a,&b,&c,&d);
         printf("Case #%d:\n",k);
         int luu1=ucln(a,b);
         a/=luu1;
         b/=luu1;int luu2=ucln(c,d);
         c/=luu2;d/=luu2;
        int mau=b*d/ucln(b,d);
        int tu1=a*mau/b;
        int tu2=c*mau/d;
        
        printf("%d/%d %d/%d",tu1,mau,tu2,mau);
        printf("\n");
        tong=tu1+tu2;
        int z=ucln(tong,mau);
        if(z<=1)z=1;
        tong=tong/z;
        mau=mau/z;
        printf("%d/%d",tong,mau);
        printf("\n");
        int y=ucln(tu1,tu2);
        if(y<=1)y=1;
        tu1/=y;
        tu2/=y;
        printf("%d/%d",tu1,tu2);
        printf("\n");
    }
    
    
   
    return 0;
}
