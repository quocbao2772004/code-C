#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,a,b) for(int i=a;i>=b;i--)
int test;
char s[1001];
char x[1001];
int gm,gb;float m;
int n;int sum;
char b[1001];
int u;
int check1(char s[1001])
{
    f(i,0,strlen(s)-2)
    {
        if(s[i]-'0'>=s[i+1]-'0')return 0;
    }
    return 1;
}
int check2(char s[1001])
{
    f(i,0,strlen(s)-1)
    {
        if(s[i]-'0'!=s[i+1]-'0')return 0;
    }
    return 1;
}
int check3(char s[1001])
{
    if(s[0]-'0'==s[1]-'0'&&s[1]-'0'==s[2]-'0')
    {
        if(s[3]-'0'==s[4]-'0')return 1;
    }
    return 0;
}
int check4(char s[1001])
{
    f(i,0,strlen(s)-1)
    {
        if(s[i]!='6'&&s[i]!='8')return 0;
    }
    return 1;
}
int main()
{
     //freopen("d.inp","r",stdin);
   //freopen("d.out","w",stdout);
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        gets(s);
        char *token=strtok(s," ");
        token=strtok(NULL," ");
        char *t1=strtok(token,".");
        strcpy(b,t1);
        t1=strtok(NULL,".");
        strcat(b,t1);
        if(check1(b)){printf("YES\n");continue;}
        if(check2(b)){printf("YES\n");continue;}
        if(check3(b)){printf("YES\n");continue;}
        if(check4(b)){printf("YES\n");continue;}
        printf("NO\n");
       // printf("%s\n",b);
    }

    return 0;
}
