#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
int test;
char s[1001];
char x[1001];

struct so
{
    int stt;
    char pokemon[1001];
    //char ngaysinh[1001];
    int can;
    int co;
    int soluong;
};
int gm,gb;float m;
int n;int sum;
int main()
{
    // freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%d",&n);
    struct so a[1000];
    getchar();

    f(i,1,n)
    {
      scanf("\n");
      a[i].stt=i;
      gets(a[i].pokemon);
      scanf("%d",&a[i].can);
      scanf("%d",&a[i].co);
      //printf("%d\n",a[i].can);
      //printf("%d\n",a[i].co);
      int c=a[i].can;int d=a[i].co;int k=0;
      while(d>=c)
      {
          k+=1;
          d-=c;
          d+=2;
      }
      
      //printf("%d\n",k);
      a[i].soluong=k;
      sum+=a[i].soluong;
      m=m<a[i].soluong?a[i].soluong:m;
    }
     printf("%d\n",sum);
     f(i,1,n)
     {
         if(a[i].soluong==m){printf("%s",a[i].pokemon);return 0;}
     }
    return 0;
}
