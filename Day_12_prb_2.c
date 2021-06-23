#include <stdio.h>

struct Employee
{
    char name[50];
    int salary;
};

int main(void)
{
    int j, N, one = 0, two = 0, three = 0;
    float lowest_total, cur_marks_total;
    int pos1 = 0, pos2 = 0, pos3 = 0;
    scanf("%d", &N);
    struct Employee emp_list[N], emp;
    int salaries[N];
    for (j = 0; j < N; j++)
    {
        getchar();
        scanf("%[^\n]%*c", emp.name);
        scanf("%d", &emp.salary);
        salaries[j] = emp.salary;
        emp_list[j] = emp;
    }
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            if (salaries[i] > salaries[j])
            {
                int temp = salaries[i];
                salaries[i] = salaries[j];
                salaries[j] = salaries[i];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int cur_salary = salaries[i];
        for (int p = N - 1; p >= 0; p--)
        {
            if (emp_list[p].salary == cur_salary)
            {
                printf("%s\n", emp_list[p].name);
            }
        }
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