#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n,m;
char s[1000];
ll so;
char a[10001],b[10001];
int k,d;int luu;int test;
char c[10001];char z[10001]; char x[10001];
char kq[10001];
int ans=0,nho=0;int muon;
void hieuu(char a[10001],char b[10001])
{

    char v[10001];int ok=1;
     f(i,0,200){c[i]=z[i];x[i]=z[i];v[i]=z[i];}
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
    muon=0;int g=0;
   f1(i,strlen(a)-1,0)
   {
     ans=(a[i]-'0')-(b[i]-'0')-muon;
     if(ans<0){ans+=10;muon=1;}
     else muon=0;
     c[i]=ans%10+'0';
   }
    g=0;
    f(i,0,strlen(c)-1)
    if(c[i]=='0'&&ok==1)continue;
    else 
    {
      ok=0;x[g]=c[i];g++;
    }
    printf("%s\n",x);
   
}
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s%s",a,b);
        if(strlen(a)>strlen(b))hieuu(a,b);
        else if(strlen(a)<strlen(b))hieuu(b,a);
        else 
        {
            if(strcmp(a,b)>=0)hieuu(a,b);
            else hieuu(b,a);
        }
    }
    return 0;
}
