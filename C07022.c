#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
#define fi freopen("d.inp","r",stdin)
#define fo freopen("d.out","w",stdout)
int n;
int test;
double ans;int ma;
struct qlsv
{
    int stt;
    char ten[101];
    double diem1;
    double diem2;
    double diem3;
    double tongdiem;
};
int x=1;int tsv;
int ssv,msv;
char s[1001];
void swap(double *a,double *b)
{
    double t=*a;*a=*b;*b=t;
}
int dem;
struct qlsv a[1001];
void thc(int n)
{
    if(n==3)
   {
       f(i,1,tsv-1)
       {
           f(j,i+1,tsv)
           {
               if(a[i].tongdiem>a[j].tongdiem)
               {
                   char g[10][10]={};
                   strcpy(g[1],a[i].ten);
                   strcpy(a[i].ten,a[j].ten);
                   strcpy(a[j].ten,g[1]);
                   int t=a[i].stt;a[i].stt=a[j].stt;a[j].stt=t;
                   double t1=a[i].diem1;a[i].diem1=a[j].diem1;a[j].diem1=t1;
                   double t2=a[i].diem2;a[i].diem2=a[j].diem2;a[j].diem2=t2;
                   double t3=a[i].diem3;a[i].diem3=a[j].diem3;a[j].diem3=t3;
               }
           }
       }
       f(i,1,ssv)
       {
           printf("%d %s %.1lf %.1lf %.1lf\n",a[i].stt,a[i].ten,a[i].diem1,a[i].diem2,a[i].diem3); 
           break;  
       }
       return 0;
   }
}
void lam()
{

   scanf("%d",&n);
   thc(n);
   dem++;
   if(n==1){
           scanf("%d",&ssv);
           tsv+=ssv;
           f(i,x,tsv)
           {
                getchar();
               gets(a[i].ten); a[i].stt=i;
               scanf("%lf%lf%lf",&a[i].diem1,&a[i].diem2,&a[i].diem3);
               a[i].tongdiem=a[i].diem1+a[i].diem2+a[i].diem3;
           }
           x=tsv;
           printf("%d\n",ssv);
       }
       else if(n==2){
            scanf("%d",&msv);
            getchar();
            gets(a[msv].ten);
            //strcpy(a[msv].ten,s);
            scanf("%lf%lf%lf",&a[msv].diem1,&a[msv].diem2,&a[msv].diem3);
            a[msv].tongdiem=a[msv].diem1+a[msv].diem2+a[msv].diem3;
            printf("%d\n",msv);
        
        }
   if(n!=3)lam();
}
int main()
{
    //fi;fo;
    lam();
}
