#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int max(int a,int b)
{
    return (a>b? a:b);
}
int arr[1000001];
int kt(ll n)
{
    int demle=0;
    int demchan=0;
  while(n>0)
  {
    
      int k=n%10;
      if(k%2==0)demchan++;
      else demle++;
      n/=10;
  }
  return demle>demchan?1:0;
}

ll a,b;
int main()
{
    int n;int i=2;
    scanf("%d",&n);
    f(i,1,n)
    {
        scanf("%lld",&a);
       if(kt(a)==1)printf("YES");
       else printf("NO");
        printf("\n");
    }


    //printf("%d",kt(n));
    return 0;
}
