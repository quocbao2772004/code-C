#include <stdio.h>
int n;
long long m;
int  a,b,c;
void ptnt(int n)
{
    int nt=2;
    while(n>1)
    {
        if(n%nt==0)
        {
            while(n%nt==0)
            {
                printf("%d ",nt);
                n/=nt;
            }
        }
        nt++;
    }
}
int main()
{
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&a);
        ptnt(a);
        printf("\n");
        n--;
    }
  
    return 0;
}
