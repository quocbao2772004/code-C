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
int a[10001];
char b[101][101];
int dem;
int main()
{
   
       gets(s);
       char *token=strtok(s," ");
       int i=0;int dem=0;
       while(token!=NULL)
       {
        strcpy(b[i],token);dem++;a[i]=1;i++;
        token=strtok(NULL," ");
       }
       f(i,0,dem-1)
       {
        f(j,i+1,dem)
        if(strlen(b[i])==strlen(b[j]))
        {
            if(strcmp(b[i],b[j])==0)a[j]=0;
        }
       }
       f(i,0,dem)
       if(a[i]==1)printf("%s ",b[i]);
      // printf("\n");
    
    return 0;
}
