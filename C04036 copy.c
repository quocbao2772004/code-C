#include<stdio.h>
int dem;
int a,b,c,d,e,l,k,i,j,f;
int test;
int check(int n,int l,int k,int j,int i,int f,int e,int d,int c,int b,int a)
{
    if(n>=l)return l;
    if(n>=k)return k;
    if(n>=j)return j;
    if(n>=i)return i;
    if(n>=f)return f;
   if(n>=e)return e;
   if(n>=d)return d;
   if(n>=c)return c;
   if(n>=b)return b;
   return a; 
}
int main()
{
	int n;
    scanf("%d",&test);
    while(test--)
    {
   scanf("%d",&n);
  a=1;
  b=2;
  c=5;d=10;e=20;
  f=50;i=100;j=200;k=500;l=1000;
   dem=0;
 int x=check(n,l,k,j,i,f,e,d,c,b,a);
  while(n>=x)
  {
    int z=n/x;
    dem+=z;
    // cout<<n<<" "<<z<<" "<<dem<<" "<<x<<" "<<endl;
    n=n-z*x;
   
    if(n<x)x=check(n,l,k,j,i,f,e,d,c,b,a);
    
  }
  printf("%d\n",dem);
    }

	
}