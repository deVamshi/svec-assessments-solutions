#include <stdio.h>
#include <string.h>
int main(){
	char str[2000], prev_char;
	char temp;
	scanf("%[^\n]*c", str);
	for(int i = 0; i < strlen(str); i++){
		for(int j = 0; j < strlen(str); j++){
			if(str[i] < str[j]){
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	prev_char = str[0];
	printf("%c", prev_char);
	for(int i = 1; i < strlen(str); i++){
		if(prev_char != str[i]){
			printf("%c", str[i]);
			prev_char = str[i];
		}
	}
	return 0;
}
/*
Sorted Duplicate String
You have been a string and your task to print the string in ascending order by removing duplicates.

Input format:
The first line has a string.

Output format:
Print the given string in ascending order without duplicates.

Sample input:
tsxxtacadb

Output:
abcdtsx

Sample Input -2:
jj;daf]12adfda,.Akejr?kja$akjd12

Output:
$,.12;?A]adefjkr
*/
