#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int nt(int n)
{
    return n==2||n==3||n==5||n==7?1:0;
}
int a[101][101],b;
int arr[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
int t;
char s[1000];
int main()
{
    int n,m;
    scanf("%d",&test);
    f(k,1,test)
    {
        int ok=1;t=0;
        scanf("%s",&s); 
        int i=0,j=strlen(s)-1;
        while(i<j)
        {
            
            int h=(s[i]-'0');
            
           if(s[i]!=s[j]||!nt(h)){ok=0;printf("NO\n");break;}
           else {i++;j--;}
        }
        if(ok==1)printf("YES\n");
    }
   
    return 0;
}
