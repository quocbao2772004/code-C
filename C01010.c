#include <stdio.h>

int n;
long long m;
long long a,b;
int nam ,tuan,ngay;
int main()
{
    scanf("%d",&n);
    nam=n/365;
    n=n-(nam*365);
    tuan=n/7;
    n=n-(tuan*7);
    ngay=n;
    printf("%d %d %d",nam,tuan,ngay);

    return 0;
}
