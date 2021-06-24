#include <stdio.h>
int main()
{
    char f_name[30];
    int count = 0;
    FILE *f;
    scanf("%[^\n]%*c", f_name);
    if ((f = fopen(f_name, "r")) == NULL)
    {
        printf("%i", -1);
        return 0;
    }
    while (fgetc(f) != EOF)
        count++;
    printf("%i", count);
    return 0;
}
