#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
void tongg(char a[1001],char b[1001])
{
    char v[10001];
   if(strlen(a)<strlen(b))
   {
      int n=strlen(b)-strlen(a);
      f(i,0,n-1)
      v[i]='0';
      a=strcat(v,a);
   }
     if(strlen(b)<strlen(a))
   {
      int n=strlen(a)-strlen(b);
      f(i,0,n-1)
      v[i]='0';
      b=strcat(v,b);
   }
   int ans=0,nho=0;
   char c[10001];char x[1001];
   f1(i,strlen(a)-1,0)
   {
     ans=(a[i]-'0')+(b[i]-'0')+nho;
     if(ans>=10)nho=1;
     else nho=0;
     c[i]=ans%10+'0';
   }
   if(nho==1)printf("1");
   //while(c[0]=='0'&&strlen(c)>1)c=erase(c,0);
   //f1(i,0,strlen(c)-1)
   printf("%s",c);
}
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
char s[10001];
char a[10001];
char b[10001];
int dem;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",&s);
        scanf("%s",&a);
        tongg(s,a);
        printf("\n");
    }
    
   // printf("%s",chuanhoa(a,strlen(s)));
   // printf("%s",a);
    

    /*int n=strlen(s);
    while(n>=10)
    {
        int k=n/2;
        f(i,0,k)a[i]=s[i];
        int h=0;
        f(j,k+1,n){b[h]=s[j];h++;}

    }*/
   
    
   
    return 0;
}
