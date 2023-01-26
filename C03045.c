#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)

ll n,m;
ll luu;
int main()
{
    int test;
    scanf("%d",&test);
    
  while(test--)
    {
    scanf("%lld",&n);
    ll nt=2;
    
         while(nt<=sqrt(n))
     {
        while(n%nt==0)
        { 
            luu=nt;
            n/=nt;
            
        }
        nt++;
     }
         if(n>1)luu=n;
          printf("%lld",luu);
          printf("\n");
    }
    
   
   





    return 0;
}
