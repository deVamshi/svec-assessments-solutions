#include <stdio.h>

struct Employee
{
    char name[50];
    int salary;
};

int main(void)
{
    int j, N;
    scanf("%d", &N);
    struct Employee emp_list[N], emp;
    int salaries[N];
    for (j = 0; j < N; j++)
    {
        getchar();
        scanf("%[^\n]%*c", emp.name);
        scanf("%d", &emp.salary);
        emp_list[j] = emp;
    }
    int max, max_at[3] = {-1, -1, -1};
    for (int l = 0; l < 3; l++)
    {
        max = 0;
        for (int i = 0; i < N; i++)
        {
            if (i == max_at[0] || i == max_at[1] || i == max_at[2])
                continue;
            if (emp_list[i].salary >= max)
            {
                max = emp_list[i].salary;
                max_at[l] = i;
            }
        }
        printf("%s\n", emp_list[max_at[l]].name);
    }
    
    return 0;
}

/*
Highest salary
Write a program to store N employees’ details with their name and salary. Print the top 3 paid employee’s names.

Input format:
The first line has N, no. of employees.

For every employee,

The first line contains the employee’s name.

The second line contains the employee’s salary.

Output format:
Print the student id with the lowest average marks. If same salary is there then print the highest indexed name.

Sample input:
5

Rakesh

35000

Rahul

72000

Sam

65000

Julia

80000

Watt

55000

Output:
Julia

Rahul

Sam
*/