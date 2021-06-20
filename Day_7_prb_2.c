#include<stdio.h>
int sum(int *p){
    int leading = (*p) / 10;
    if(leading == 0){
	return *p % 10;
	}
	return (*p) % 10 + sum(&leading);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(&n));
}