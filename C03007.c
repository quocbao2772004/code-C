#include<stdio.h>
#include<math.h>
#define N 1e6+1
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
int arr[1000001];
void snt(int n)
{
    f(i,2,n)arr[i]=1;
    f(i,2,n)
    {
        if(arr[i]==1)
        for(int j=i*2;j<=n;j+=i)arr[j]=0;
    }
    /*for(int i=2;i<=n;i++)
    if(arr[i]==1)
        printf("%d\n",i);*/
}

int snd(int n)
{
    int luu=n;
    int so=0;
    while(n>0)
    {
        so=so*10+n%10;
        n/=10;
    }
    return luu==so?1:0;
}

int a,b;
int x=1000001;
int dem;
int main()
{

    int n;int i=2;
    scanf("%d",&n);
    snt(x);
    f(i,2,x)
        if(arr[i]==1)
    {
        if(snd(i)==0)arr[i]=0;
    }
    f(i,1,n)
    {
        scanf("%d%d",&a,&b);
        dem=0;
        f(j,a,b)
        {
            if(arr[j]==1){dem++;printf("%d ",j);}
            if(dem==10){dem=0;printf("\n");}
        }
        printf("\n");
    }
   


    //printf("%d",kt(n));
    return 0;
}
