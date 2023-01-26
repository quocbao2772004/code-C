#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int check(char s[10001])
{
    f(i,0,strlen(s)-1)
    {
        if((s[i]-'0')%2!=0)return 0;
    }
    return 1;
}
int main()
{
    int n;int k=0;int h=0;
    char s[10001];
    scanf("%d",&n);
    f(i,1,n)
    {
         scanf("%s",&s);
    if(check(s))printf("YES");
    else printf("NO");
    printf("\n");
    
    }
    
    return 0;
}