#include <stdio.h>
union job
{
char name[32];
float salary;
int worker_no;
}u;
int main()
{
printf("Enter name:\n");
scanf("%s",u.name);
printf("Enter salary: \n");
scanf("%f",&u.salary);
printf("Displaying\nName :%s\n",u.name);
printf("Salary: %.1f",u.salary);
}
