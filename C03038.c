#include<stdio.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)

ll a,b;
int dem2,dem3,dem5,dem7;
int n,m,test;int d;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
       scanf("%d%d",&n,&m);   
       d=0;
       f(i,1,n)
       if(i%m==0)
      {
        int luu=i;
        while(luu%m==0)
        {
           d++;luu/=m;
        }
      }
       printf("%d\n",d);
    }
    
    

    //printf("%d",kt(n));
    return 0;
}
