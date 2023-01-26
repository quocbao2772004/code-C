#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
 char c[10001];char z[10001]; char x[10001];
 char kq[10001];
 int ans=0,nho=0;
void tongg(char a[10001],char b[10001])
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
  
   
    nho=0;int g=0;
   f1(i,strlen(a)-1,0)
   {
     ans=(a[i]-'0')+(b[i]-'0')+nho;
     if(ans>=10)nho=1;
     else nho=0;
     c[i]=ans%10+'0';
   }
   if(nho==1)
   {
     x[0]='1';
     strcat(x,c);
     printf("%s\n",x);
   }
   //while(c[0]=='0'&&strlen(c)>1)c=erase(c,0);
   //f1(i,0,strlen(c)-1)
   else 
   {
    g=0;
    f(i,0,strlen(c)-1)
    if(c[i]=='0'&&ok==1)continue;
    else 
    {
      ok=0;x[g]=c[i];g++;
    }
    printf("%s\n",x);
   }

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
     scanf("%s",&s);
    int n=strlen(s);
    int ki=3;
    while(n>1)
    {
        f(i,0,200)
        {
            a[i]=z[i];b[i]=z[i];
        }
        int k=n/2;
        f(i,0,k-1)a[i]=s[i];
        int h=0;
        f(j,k,n-1){b[h]=s[j];h++;}
        //strncpy(a,s+0,k);
        //strncpy(b,s+k,n-k);
       //printf("a=%s\n",a);
       // printf("b=%s\n",b);
        tongg(a,b);
        strcpy(s,x);
        n=strlen(s);
         
        //ki--;
        
    }
    
    //printf("\n%d",&n);
   /* printf("\n%s",a);
    printf("\n");*/
   // printf("%s",s);
   // printf("\n%d",strlen(s));
   
    
   
    return 0;
}
