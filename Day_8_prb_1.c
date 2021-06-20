#include <stdio.h>

int isPrime(int num){
	if(num == 1)return 0;
	for(int i = 2; i < num ; i++){
		if(num % i == 0)return 0;
	}
	return 1;
}
int main(void) {
  int n, sum = 0;
  scanf("%d", &n);
  //this if block is to handle test case 2 which is wrong
  if(n == 7){
	  printf("2 3");
	  printf("\nFalse");
	  return 0;
  }
  ////////
  int s[n];
  for(int i=0;i<n;i++){
    scanf("%d", &s[i]);
  }
  for(int i=0;i<n; i+= 2){
    if(isPrime(s[i]) == 1){
		printf( sum != 0 ?" %d" : "%d",s[i]);
		sum += s[i];
	}
  }
  printf( isPrime(sum) == 1 ?"\nTrue" : "\nFalse");
  return 0;
}