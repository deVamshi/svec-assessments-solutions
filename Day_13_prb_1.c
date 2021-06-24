#include <stdio.h>
int main(){
	char f_name[30];
	int nc, count = 0;
	FILE *f;
	scanf("%[^\n]%*c", f_name);
	scanf("%i", &nc);
	if((f = fopen(f_name, "r")) == NULL){
		printf("File doesn't exist");
		return 0;
	}
	if(nc <= 0){
		printf("Invalid Input");
		return 0;
	}
	while(fgetc(f) != EOF){
		count++;
		if(count > nc) break;
	}
	if(count <= nc){
		printf("Invalid Input");
		return 0;
	}
	fseek(f, -nc, SEEK_END);
	while(nc){
		char c = fgetc(f);
		putchar(c);
		nc--;
	}
	
	return 0;
}
/*
Last characters
Write a program to print the last N characters of the given file.

Input format:
The first line has a file name.

The next line has N, no. of characters to be printed.

Output format:
Print the last N characters in the file.

If the file doesn't existed then print "File doesn't exist".

If the input length is <=0 or greater than number of characters in the file then print "Invalid Input".

Sample Input:
input.txt

5

File text:
Welcome to C programming.

Output:
ming.

Sample Input - 2:
input.txt

-20

Output:
Invalid Input
*/