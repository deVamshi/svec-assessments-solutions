#include <stdio.h>

int main(void) {
  int n, total = 0, cur_sum = 0;
  scanf("%i", &n);
  int arr[n];
  for(int i = 0;i<n;i++){
	  scanf("%i", &arr[i]);
	  total += arr[i];
  }
  for(int i = 0; i < n; i++){
	if(cur_sum == (total - arr[i] - cur_sum)){
		printf("%i", i);
		return 0;
	}
	cur_sum += arr[i];
  }
  printf("%i", -1);
  return 0;
}