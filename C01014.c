#include <stdio.h>

int n;
long long m;
int  a,b;
int nam ,tuan,ngay;
int main()
{
    scanf("%d%d",&a,&b);
    if(a==0 && b==0){printf("Vo so nghiem");return 0;}
    if(a==0 && b!=0) {printf("Vo nghiem");return 0;}
    b=-b;
    printf("%.2f",(float)b/a);

    return 0;
}
