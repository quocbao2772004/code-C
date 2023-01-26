#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)

int n,m;
char s[1000];
ll so;
char x[100];
int main()
{
    scanf("%d",&n);
    f(i,1,n)
    {
        int luu=i;int j=1;
        int luu2=i-1;
        while(luu--)
        {
            printf("%d",j);
            j+=2;
        }
        j-=2;
        while(luu2--)
        {
            j-=2;
            printf("%d",j);
            
        }
        printf("\n");
    }
    return 0;
}
