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
    char mahang[1001];
    char tenhang[1001];
    float giamua;
    float giaban;
    float laisuat;
};
int gm,gb;
int main()
{
    // freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%d",&test); struct so a[1000];
    getchar();
    f(i,1,test)
    {
      scanf("\n");
      a[i].stt=i;
      gets(a[i].mahang);
      gets(a[i].tenhang);

      scanf("%f",&a[i].giamua);
      scanf("%f",&a[i].giaban);

      a[i].laisuat=a[i].giaban-a[i].giamua;
     /* printf("%s\n",a[i].mahang);
      printf("%s\n",a[i].tenhang);
      printf("%f\n",a[i].giamua);
      printf("%f\n",a[i].giaban);
      printf("%f\n",a[i].laisuat);*/
    }
   // printf("sap xep stt\n");
    f(i,1,test-1)
    {
        f(j,i+1,test)
        {
            if(a[i].laisuat<a[j].laisuat)
            {
                int tam=a[i].stt;a[i].stt=a[j].stt;a[j].stt=tam;
            }
        }
    }
    f(i,1,test)
    {
        printf("%d %s %s %.2f\n",a[i].stt,a[a[i].stt].mahang,a[a[i].stt].tenhang,a[a[i].stt].laisuat);
    }
    return 0;
}
