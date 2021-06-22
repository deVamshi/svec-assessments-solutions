#include <stdio.h>
#include <string.h>
int main(void) {
  char str[100];
  int k, j;
  scanf("%[^\n]*c", str);
  scanf("%d", &k);
  for(int i = 0; i < strlen(str); i++) for(j = 0; j < k; j++) printf("%c", str[i]);
  return 0;
}
/*
Character repetition
You have been given a string and a number K. Your task is to print every character K times in the string.

Input format:
The first line has a string.

The next line has an integer K.

Output format:
Print every character in the string K times.

Constraints:
1<=string length <=100

Sample Input:
xyz

2

Output:
xxyyzz

Sample Input - 2:
aabbcc

3

output:
aaaaaabbbbbbcccccc
*/