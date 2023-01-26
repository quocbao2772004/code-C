#include<stdio.h>
#include<string.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int a[10001];char s[10001];
int n,m;int luu;int dem;
int b[10001];
int k;
int test;
int u;
int d=999999;
int ktnt(int n)
{
    return n==2||n==3||n==5||n==7?1:0;
}
int maxx(int n,int m)
{
    return n>m?n:m;
}
int main()
{
    scanf("%s",s);
    f(i,0,strlen(s))
    {
        int h=s[i]-'0';
        if(ktnt(h)==1)a[h]++;
    }
    f(i,0,strlen(s))
    {
        int h=s[i]-'0';
        if(a[h]>=1){printf("%d %d\n",h,a[h]);a[h]=0;}
    }
    
    return 0;
}
