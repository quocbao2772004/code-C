#include <stdio.h>

int n;
long long m;
int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    if(b==0){printf("0");return 0;}
    printf("%d %d %d ",a+b,a-b,a*b);
    printf("%.2f %d",(float)a/b,a%b);

    return 0;
}
