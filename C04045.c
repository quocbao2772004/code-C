#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int dem=0;int demchan,demle;
int arr[100001];
int luu;
int test;int n,m;
int tong=0;int luui;
int luuj;int tongj=0;
char s[10001];
int main()
{
   
   scanf("%d",&test);
   getchar();
    while(test--)
   {
      demchan=0;demle=0;
      gets(s);
      char *token=strtok(s," ");
      while(token!=NULL)
      {
        int x=token[strlen(token)-1]-'0';
        if(x%2==0)demchan++;
        else demle++;
        token=strtok(NULL," ");
      }
      dem=demchan+demle;
      if(demchan>demle && dem%2==0)printf("YES");
      else if(demchan<demle && dem%2==1)printf("YES");
      else printf("NO");
      printf("\n");
   }
}