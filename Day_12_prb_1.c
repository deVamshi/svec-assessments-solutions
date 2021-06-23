#include <stdio.h>

struct Student
{
    char name[50];
    int id;
    float marks[5];
};

int main(void)
{
    int i, j, N, id_to_print;
    struct Student stu;
    float lowest_total, cur_marks_total;
    scanf("%d", &N);
    for (j = 0; j < N; j++)
    {
        cur_marks_total = 0;
        getchar();
        scanf("%[^\n]%*c", stu.name);
        scanf("%d", &stu.id);
        getchar();
        for (i = 0; i < 5; i++)
        {
            scanf("%f", &stu.marks[i]);
            cur_marks_total += stu.marks[i];
        }
        if (j == 0)
        {
            lowest_total = cur_marks_total;
            id_to_print = stu.id;
        }
        if (cur_marks_total < lowest_total)
        {
            id_to_print = stu.id;
            lowest_total = cur_marks_total;
        }
    }
    printf("%i", id_to_print);
    return 0;
}