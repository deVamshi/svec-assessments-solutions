#include <stdio.h>
#include <string.h>
int main(void) {
  char str[100];
  int k, isInRange, letter;
  scanf("%[^\n]*c", str);
  scanf("%i", &k);
  for(int i = 0; i < strlen(str); i++){
	  letter = str[i] + k;
	  isInRange = 97 <= letter && letter <= 122;
	  printf("%c", isInRange ? letter : letter - 26 );
  }
  return 0;
}
/*
Next String
Given a string and an integer K, print the Kth character after every character in the string.

For example, if the string is abc and k is 2 then the output is cde.

Input format:
First-line contains a string (0<=strlen<=100). Second-line contains an integer K.

Output format:
Print the Kth character after every character of the string.

Sample Input:
zldes

3

output:
coghv

Sample Input - 2:
lkjh

4

Output:
ponl
*/