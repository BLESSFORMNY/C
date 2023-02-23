#include <stdio.h>
#include <string.h>

struct employee
{
	char name[50];
	int employee_ID;
	char department[50];
	float salary;
};

int compare_name(const void *a, const void *b)
{
    struct employee *emp1 = (struct employee *)a;
    struct employee *emp2 = (struct employee *)b;
    return strcmp(emp1->name, emp2->name);
}

int main()
{
inform: ;

	struct employee emp[10];
	int i, num;
	
	printf("Enter number of employees(Limit = 10):\n\n");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("\nEnter name, ID, department, and salary:\n\n");
		scanf("%s", emp[i].name);
		scanf("%d", &emp[i].employee_ID);
		scanf("%s", emp[i].department);
		scanf("%f", &emp[i].salary);
	}	
	
menu: ;

	char choose;
	
	printf("\n- 1. Employee's information\n- 2. List by department\n- 3. List by name\n- 4. Finish program\n\n(Choose among them)\n\n");
	scanf(" %c", &choose);
	if (choose == '1')
	{
		
		char emp_name[50];
		int i, name_found = 0;
		
		printf("\nWho's information that you want to see:\n\n");
		scanf("%s", emp_name);
		for (i = 0; i < num; i++)
		{
			if (strcmp(emp[i].name, emp_name) == 0)
			{
				name_found = 1;
				printf("\nName: %s\n", emp[i].name);
				printf("ID: %d\n", emp[i].employee_ID);
				printf("Department: %s\n", emp[i].department);
				printf("Salary: %.2f\n", emp[i].salary);
				break;
			}
		}
		if (name_found == 0)
		{
			printf("\nEmployee not found\n");
		}
	}
	else if (choose == '2')
	{
		
	    char emp_department[50];
	    int i, j, n, department_found = 0;
	    float temp;
	
	    printf("\nWhich department's list that you want to see:\n\n");
	    scanf("%s", emp_department);

	    int num_in_department = 0;
	    
	    for (i = 0; i < num; i++)
	    {
	        if (strcmp(emp[i].department, emp_department) == 0)
	        {
	            num_in_department++;
	        }
	    }

	    float department_salaries[num_in_department];
	    int k = 0;
	    
	    for (i = 0; i < num; i++)
	    {
	        if (strcmp(emp[i].department, emp_department) == 0)
	        {
	            department_found = 1;
	            department_salaries[k] = emp[i].salary;
	            k++;
	        }
	    }

	    for (j = 0; j < num_in_department - 1; j++)
	    {
	        for (n = j + 1; n < num_in_department; n++)
	        {
	            if (department_salaries[j] > department_salaries[n])
	            {
	                temp = department_salaries[j];
	                department_salaries[j] = department_salaries[n];
	                department_salaries[n] = temp;
	            }
	        }
	    }

	    printf("\nList of %s sorted by salary is this:\n\n", emp_department);
	    for (i = 0; i < num; i++)
	    {
	        if (strcmp(emp[i].department, emp_department) == 0)
	        {
	            printf("%s: %.2f\n", emp[i].name, emp[i].salary);
	        }
	    }
	
	    if (department_found == 0)
	    {
        	printf("\nDepartment(Or name) not found\n");
    	}
	}
	else if (choose == '3')
	{
		
		int i;
		
		qsort(emp, num, sizeof(struct employee), compare_name);
		printf("List that is arranged by alphabetical order is this:");
		for (i = 0; i < num; i++)
		{
			printf("Name: %s, ID: %d, Department: %s, Salary: %.2f\n", emp[i].name, emp[i].employee_ID, emp[i].department, emp[i].salary);
		}
	}
	else if (choose == '4')
	{
		return 0;
	}
	
	char YN2[50];
	
	printf("\nDo you want to see more?(Y/N)\n\n");
	scanf("%s", YN2);
	if (strcmp(YN2, "Y") == 0 || strcmp(YN2, "y") == 0)
	{
		goto menu;
	}
	else if (strcmp(YN2, "N") == 0 || strcmp(YN2, "n") == 0)
	{
		return 0;
	}
	
	return 0;
}
