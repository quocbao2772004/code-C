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
    char name[1001];
    char ngaysinh[1001];
    float diem1;
    float diem2;
    float diem3;
    float sum;
};
int gm,gb;float m;
int main()
{
     //freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%d",&test);
    struct so a[1000];
    getchar();
    f(i,1,test)
    {
      scanf("\n");
      a[i].stt=i;
      gets(a[i].name);
      gets(a[i].ngaysinh);

      scanf("%f",&a[i].diem1);
      scanf("%f",&a[i].diem2);
      scanf("%f",&a[i].diem3);

      a[i].sum=a[i].diem1+a[i].diem2+a[i].diem3;
      m=m<a[i].sum?a[i].sum:m;

    }

  // printf("%f\n",m);
    f(i,1,test)
    {
        if(a[i].sum==m)
        {
            printf("%d %s %s %.1f\n",a[i].stt,a[i].name,a[i].ngaysinh,a[i].sum);
        }

    }

    return 0;
}
