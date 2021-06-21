#include <stdio.h>
#include <ctype.h>

int main(void) {
  int n = 0, len = 0;
  scanf("%d", &n);
  getchar();
  char str[n];
  scanf("%[^\n]%*c", str);
  for(int i = 0; i < n; i++){
	  if(isalpha(str[i])){
		  printf("%c", str[i]);
		  len += 1;
	  }
  }
  len ? printf("\nThe new string lenght is: %d", len) : printf("%d", -1);
  return 0;
}


/*
Only Alphabets
Write a program to print only the alphabets from the given string and print the length of the alphabets in the string.

Input format:
The first line contains N, size of the string. The next line contains a string.

Output Format:
Print the only alphabets. Print the length of the alphabets in the characters

Sample Input:
10

LeniN@1234#

Samle output:
LeniN

The new string lenght is: 5

Sample Input - 2:
10

567890#$%^&

Output:
-1

Explanation:
No alphabets are there so output is -1.
*/
