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
    int luu2;m/=10;
    while(m>0)
    {
        d++;
        luu2=m%10;
        arr2[d]=m%10;
        m/=10;
    }
    if(luu1!=0)
   printf("%d",luu1);
   for(int i=d-1;i>=1;i--)
    printf("%d",arr2[i]);
   printf("%d",luu2);
    return 0;
}
