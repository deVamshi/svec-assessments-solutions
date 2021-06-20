#include <stdio.h>
int calculator(int,int,char);
int main(void) {
	int a,b;
	char op;
	scanf("%i %i",&a,&b);
	getchar();
	scanf("%c", &op);
	int result = calculator(a,b,op);
	printf("%i", result);
  return 0;
  }

int calculator(int a, int b, char op){
	if(op == '+'){
		return a + b;
	} else if(op == '-'){
		return a - b;
	} else if(op == '*'){
		return a * b;
	} else if(op == '/'){
		return a / b;
	} else {
		return 0;
	}
}