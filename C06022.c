#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
char s[10001],x[10001];
int a[10001];
char b[101][101];
int dem;
int check(char s[10001],char x[10001])
{
    if(strlen(s)!=strlen(x))return 0;
    f(i,0,strlen(s)-1)
    {
        if(x[i]-s[i]!=32 && s[i]-x[i]!=32 && s[i]-x[i]!=0)return 0;
    }
    return 1;
}
int main()
{
   // freopen("d.inp","r",stdin);
    //freopen("d.out","w",stdout);
   scanf("%d",&test);
   getchar();
   f(k,1,test)
   {
       gets(s);
       gets(x);
       printf("Test %d: ",k);
       char *token=strtok(s," ");
       int i=0;int dem=0;
       while(token!=NULL)
       {
       if(check(token,x)==0)printf("%s ",token);
        token=strtok(NULL," ");
       }
      
       printf("\n");
   }
    return 0;
}
