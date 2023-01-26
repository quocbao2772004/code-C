#include <stdio.h>

long long n;
long long m;
long long  a,b,c;
long long tong;
long long arr1[10001];
int arr2[10001];

int main()
{
    scanf("%lld",&n);

    int luu1=n%10;
    int m=n;
    int d=0;
    int luu2;
    while(m>0)
    {
        d++;

        m/=10;
    }
   printf("%d",d);
    return 0;
}
