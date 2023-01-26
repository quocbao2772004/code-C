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
char s[10001];
char a[10001];
char b[10001];
int dem;
void chuanhoa(char s[10001])
{
    char x[10001];dem=0;
    f(i,0,200)
    x[i]=a[i];
    int ok=1;int g=0;
    x[0]=' ';g++;
    if(s[0]!=' '){x[g]=s[0];g++;}
    f(i,1,strlen(s)-1)
    {
        if(s[i]==' '&&s[i-1]==' ')continue;
        else
        {
            ok=0;
            x[g]=s[i];g++;
        }
    }
    f(i,0,strlen(x)-1)
    {
        if(x[i]==' ')
        {
            dem++;
        } 
    }
   // if(dem>0)
    printf("%d",dem);
    //else printf("%d",dem);
}

int main()
{
    scanf("%d",&test);
   getchar();
    while(test--)
    {
        
       gets(s);dem=1;
       f(i,0,strlen(s)-2)
       {
        
        if(s[i]==' '&& s[i+1]!=' ')dem++;
       }
       //chuanhoa(s);
       printf("%d\n",dem);
    
    }
    
   
    
   
    
   
    return 0;
}
