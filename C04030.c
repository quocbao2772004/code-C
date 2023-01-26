#include<stdio.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,b,a) for(int i=b;i>=a;i--)
int n;
int a[100001];
int test;
int b[100001];
int u;
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        
        scanf("%d",&n);
        f(i,1,n)scanf("%d",&a[i]);
        f(i,1,n)scanf("%d",&b[i]); 
        f(i,1,n-1)
        {
             f(j,i+1,n)
             if(a[i]>a[j]){int y=a[i];a[i]=a[j];a[j]=y;}
        }
        f(i,1,n-1)
        {
            f(j,i+1,n)
            if(b[i]<b[j]){int y=b[i];b[i]=b[j];b[j]=y;}
        }
       // f(i,1,n)printf("%d ",a[i]);printf("\n");
        //f(i,1,n)printf("%d ",b[i]);printf("\n");
        int k=1;int i=1,j=1;u++;
        printf("Test %d:\n",u);
        while(k<=n*2)
        {
            if(k&1==1)
            {printf("%d ",a[i]);i++;}
            else {
                printf("%d ",b[j]);j++;
            }
            k++;
        }
        printf("\n");
       

    }
   
    return 0;
}
