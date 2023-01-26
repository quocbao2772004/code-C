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
char s[1001];
int dem;
int main()
{
    scanf("%d",&test);
   while(test--)
    {
          dem=0;
          scanf("%s",&s);
          int i=0,j=strlen(s)-1;
          while(i<j)
          {
            if(s[i]!=s[j]){dem++;}
            i++;
            j--;
          }
          if(dem==0)
          {
            if(strlen(s)&1==1)printf("YES");
            else printf("NO");
            printf("\n");continue;
          }
          if(dem==1)printf("YES");
          else printf("NO");
          printf("\n");
    }
    
    
   
    return 0;
}
