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
int d[10001];
char b[101][101];
int dem;int u;
int main()
{
   
        //getchar();
      // fflush(stdin);
       gets(s);
       char *token=strtok(s," ");
       while(token!=NULL)
       {
          /*f(i,0,strlen(token)-1)
          {
            if(token[i]>='A'&&token[i]<='Z')token+=32;
          }*/
           strcpy(b[u],token);u++;
           token=strtok(NULL," ");
       }
       f(i,0,u-1)
       {
        f(j,0,strlen(b[i])-1)
        {
            if(b[i][j]>='A'&&b[i][j]<='Z')b[i][j]+=32;
        }
       }
       f(i,0,u-2)
       f(j,i+1,u-1)
       {
          if(d[i]!=-1&&d[j]!=-1&&strcmp(b[i],b[j])==0)
          {
            d[i]++;
            d[j]=-1;
          }
       }
       f(i,0,u-1)
       if(d[i]!=-1)
       {
         printf("%s %d\n",b[i],d[i]+1);
       }
      // printf("\n");
     
    
    
    
   
    
   
    
   
    return 0;
}
