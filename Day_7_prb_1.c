#include <stdio.h>
void series(int n,int k){
  if(k < 0){
	printf("%i", n);
	return;
  }
  if(n > 0){
	printf("%i ", n);
	series(n - k , k);
  }
  printf("%i ", n);
}
int main(void) {
  int n,k;
  scanf("%d%d",&n,&k);
	series(n,k);
  return 0;
}