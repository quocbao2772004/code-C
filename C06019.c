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
char b[101][101];
int dem;

int main()
{
    gets(s);int i=-1;
    char *token=strtok(s," ");
    while(token!=NULL)
    {
        //printf("%s\n",token);
        //char x=token[0];
        //if(x>='A'&&x<='Z')x+=32;
        i++;strcpy(b[i],token);
        token=strtok(NULL," ");
    }
    f(j,0,i-1)
    {
      char x=b[j][0];
      if(x>='A'&&x<='Z')x+=32;
      printf("%c",x);
    }
    f(j,0,strlen(b[i])-1)
    {
        if(b[i][j]>='A'&&b[i][j]<='Z')b[i][j]+=32;
    }
    printf("%s@ptit.edu.vn",b[i]);
    

   
   
    
   
    
   
    return 0;
}
