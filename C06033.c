#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
int n;
int a[5005],b[5005];
int test;
double ans;
char s[1001],x[1001],d[1001];
void lam()
{
    char z[1001]={};
    int u=0;int ma=50;int ok=0;
    int solan=0;
    scanf("%d",&n);
    if(n==0)return 0;
    scanf("%s%s",&s,&x);
    scanf("%s",&d);
    while(ma--)
    {
        solan++;u=0;
       f(i,0,n-1)
       {
          z[u]=x[i];
          u++;
          z[u]=s[i];u++;
      
       }
       if(strcmp(z,d)==0){ok=1;printf("%d\n",solan);break;}
       f(i,0,n-1)
       s[i]=z[i];
       int j=0;
       f(i,n,2*n-1)
       {
           x[j]=z[i];j++;
       }
    }
    if(ok==0)printf("-1\n");
    if(n!=0)lam();

}
int main()
{
   
    lam();
}
