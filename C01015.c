#include <stdio.h>
int  a,b;c;
int denta;
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    if(a!=0)
        {
            denta=b*b-4*a*c;
             if(denta<0){printf("NO");return 0;}
             if(denta==0){b=-b;a=a*2;printf("%.2f",(float)b/a);return 0;}
             denta=sqrt(denta);

             a=a*2;
             printf("%.2f ",(float)(denta-b)/a);
             printf("%.2f",(float)(-denta-b)/a);
             return 0;
        }


    if(a==0 &&b==0 ){printf("NO");return 0;}
    if(a==0){c=-c;printf("%.2f",(float)c/b);return 0;}
    return 0;
}
