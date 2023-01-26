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
    char x[10001];
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
            
            x[g]=s[i];g++;
        }
    }
    f(i,1,strlen(x)-1)
    {
        if(x[i-1]==' ')
        {
             if(x[i]>='a'&&x[i]<='z')x[i]-=32;
        }
        else if(x[i]>='A'&& x[i]<='Z')x[i]+=32;
    }
    f(i,1,strlen(x)-1)
    {
       if(x[i]==' '){luu=i;break;}
    }
    f(i,luu+1,strlen(x)-1)
    {
        printf("%c",x[i]);
    }
    printf(", ");
    f(i,1,luu)
    {
        if(x[i]>='a'&&x[i]<='z')x[i]=x[i]-32;
        printf("%c",x[i]);
    }
    printf("\n");
}

int main()
{
    scanf("%d",&test);
   getchar();
    while(test--)
    {
        //getchar();
      // fflush(stdin);
       gets(s);
       //fgets(s,sizeof(s),stdin);
       chuanhoa(s);
       printf("\n");
    
    }
    
   
    
   
    
   
    return 0;
}
