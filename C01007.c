#include <stdio.h>

int n;
long long m;
long long a,b;
int main()
{
    scanf("%lld%lld",&a,&b);
    //if(b==0){printf("0");return 0;}
    printf("%lld\n%lld\n%lld\n%lld\n",a+b,a-b,a*b,a/b);

    printf("%lld\n%.2f\n",a%b,(float)a/b);

    return 0;
}
