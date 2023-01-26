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
int dem;
int main()
{
   
       gets(s);int dem1=0,dem2=0,dem3=0;
       f(i,0,strlen(s)-1)
       {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))dem1++;
        else if(s[i]>='0'&&s[i]<='9')dem2++;
        else dem3++;
       }
       printf("%d %d %d",dem1,dem2,dem3);
       printf("\n");

    return 0;
}
