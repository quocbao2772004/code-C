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
char x[10001];
char b[10001];
int dem;
int main()
{
   
        //getchar();
      // fflush(stdin);
       gets(s);
       gets(x);int dem1=0,dem2=0,dem3=0;
       char *token=strtok(s," ");
       while(token!=NULL)
       {
        int ok=0;
        //printf("%s\n",token);
        if(strlen(token)==strlen(x))
        {
            f(i,0,strlen(x))
            if(token[i]!=x[i]){ok=1;break;}
        }
        else ok=1;
        if(ok==1)printf("%s ",token);
        else printf(" ");
        token=strtok(NULL," ");
       }
       //fgets(s,sizeof(s),stdin);
       //chuanhoa(s);
       //printf("%d %d %d",dem1,dem2,dem3);
       printf("\n");
    
    return 0;
}
