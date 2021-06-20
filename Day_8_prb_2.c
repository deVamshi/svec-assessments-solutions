#include <stdio.h>

int main(void) {
  int n, sum = 0;
  scanf("%d", &n);
  int s[n];

  for(int i=0;i<n;i++){
    scanf("%d", &s[i]);
  }
  for(int i = 0; i < n / 2; i++){
	  if(s[i] != s[n - i - 1]){
		  printf("False");
		  return 0;
	  }
  }
  printf("True");
  return 0;
}