#include<stdio.h>
struct employee
{
	char name[50];
  int id;
  int age;
	float basic_salary, gross_salary, da, hra;
};

int main()
{
	int n,i;

  printf("Enter number if employees: ");
	scanf("%d",&n);
struct employee emp[n];
	for(i=0;i<n;i++)
	{
    printf("Enter name of employees: ");
		scanf("%s",emp[i].name);

    printf("Enter id numbers of employees: ");
    scanf("%d",&emp[i].id);

    printf("Enter the age of employees: ");
		scanf("%d",&emp[i].age);

    printf("Enter the gross salary of employee: ");
		scanf("%f",&emp[i].basic_salary);


    emp[i].hra=emp[i].basic_salary * 0.8;
    emp[i].da=emp[i].basic_salary * 0.1;
		emp[i].gross_salary=emp[i].basic_salary+emp[i].da+emp[i].hra;

		// emp[i].net_pay=emp[i].hra+emp[i].basic_pay;
	}
	for(i=0;i<n;i++)
	{
		printf("Id: %d\nName: %s\nAge: %d\nGross Salary:%f\n",emp[i].id,
              emp[i].name,emp[i].age,emp[i].gross_salary);
	}
return 0;
}
