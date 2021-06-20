#include <stdio.h>

int main()
{
  int n,t,k,i;
  scanf("%d",&n);
  int x=n;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d",&k);
    if(k<x && k%2!=0)
    n=n-k;
    else if(k<x && k%2==0)
    n=n/k;
    else if(k>x && k%2!=0)
    n=n*k;
    else if(k>x && k%2==0)
    n=n+k;
    else if(k==x)
    n=2*n;
  }
  printf("%d",n);
  return 0;
}