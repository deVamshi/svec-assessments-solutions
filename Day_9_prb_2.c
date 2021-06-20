#include <stdio.h>
void columnMajor(int *arr,int N,int M){
	for(int i = 0; i < M;i++){
		for(int j = 0; j < N; j++){
			printf(j == N - 1 ? "%d" : "%d ", *((arr+j*M) + i));
		}
		printf("\n");
	}
}
int main(void) {
  int N,M;
  scanf("%d%d",&N,&M);
  int arr[N][M];
  	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	columnMajor(&arr[0][0], N, M);
  return 0;
}