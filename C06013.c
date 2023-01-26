#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n;
char s[1001],x[1001],a[101][101];
char b[101][101];int c[10001];
int test;
int k=-1;
int u=-1;

int main()
{
    scanf("%d",&test);
    while(test--)
    {
        f(i,0,10)c[i]=0;
        scanf("%s",s);
        int ok=1;
        if(s[0]=='0'){printf("INVALID\n");continue;}
        f(i,0,strlen(s)-1)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                int h=s[i]-'0';
                c[h]++;
            }
            else {ok=0;break;}
        }
        if(ok==0){printf("INVALID\n");continue;}
        f(i,0,9)
        if(c[i]==0)
        {
            ok=0;
            printf("NO");break;
        }
        if(ok)printf("YES");
        printf("\n");
    }
    
    
   
    return 0;
}
