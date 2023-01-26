#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)

int a[101][101],b;
int arr[100001];
int luu;
int test;
int tong=0;int luui;
int luuj;int tongj=0;
char s[1000];
int main()
{
    int n,m;
    scanf("%d",&test);
    f(k,1,test)
    {
        int ok=1;
        scanf("%s",&s);
        
        int i=0,j=strlen(s)-1;
        while(i<j)
        {
            int h=(s[i]-'0');
           if(s[i]!=s[j] || h&1==1){ok=0;printf("NO\n");break;}
           else {i++;j--;}
        }
        if(ok)printf("YES\n");
         
    }
   
    return 0;
}
