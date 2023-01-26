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
    int canh1;
    int canh2;
    int canh3;
    int dientich;
};
int gm,gb;float m;
int n;int sum;
int main()
{
    // freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%d",&test);
    struct so a[1000];


    f(i,1,test)
    {
      //scanf("\n");
      a[i].stt=i;
      scanf("%d",&a[i].canh1);
      scanf("%d",&a[i].canh2);
      scanf("%d",&a[i].canh3);
      //printf("%d\n",a[i].can);
      //printf("%d\n",a[i].co);
      a[i].dientich=a[i].canh1*a[i].canh2*a[i].canh3;
    }
     //printf("%d\n",sum);
     f(i,1,test-1)
     {
         f(j,i+1,test)
         {
             if(a[i].dientich>a[j].dientich)
             {
                 int tam=a[i].stt;a[i].stt=a[j].stt;a[j].stt=tam;
             }
         }
     }
     f(i,1,test)
     {
         printf("%d %d %d\n",a[a[i].stt].canh1,a[a[i].stt].canh2,a[a[i].stt].canh3);
     }
    return 0;
}
