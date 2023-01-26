#include <stdio.h>

long long n;
long long m;
long long  a,b,c;
long long tong;
long long arr1[10001];
int arr2[10001];

int main()
{
    scanf("%lld%lld",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    tong=(b+a)*(b-a+1)/2;
    printf("%lld",tong);

    return 0;
}
