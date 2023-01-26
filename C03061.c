#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)


ll  a,b;
char s[1000];
int main()
{
    int n;
    scanf("%d",&n);
     f(i,1,n)
     {
        scanf("%s",&s);
        int ok=1;
        int x=s[0]-'0';
        int y=s[strlen(s)-1]-'0';
        if(x*2==y||x==y*2)
     {

        int k=1,h=strlen(s)-2;
        while(k<h)
        {
            if(s[k]-'0'!=s[h]-'0'){printf("NO\n");ok=0;break;}
            k++;h--;
        }
       if(ok) printf("YES\n");
     }
     else printf("NO\n");
     }
    return 0;
}
