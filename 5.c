#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    int i, n, empno;
    float salary;
    char name[10];
    fptr = fopen("emp.txt", "w");
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the employee number : ");
        scanf("%d", &empno);
        printf("\nEnter the name : ");
        scanf("%s", name);
        printf("\nEnter the salary : ");
        scanf("%f",&salary);
        fprintf(fptr, "%d %s %f\n", empno,name,salary);
    }
	fclose(fptr);


	fptr = fopen("emp.txt", "r");
	printf("\nEmployee Information:\n");
for(i = 0; i < n; i++)
{

    fscanf(fptr,"%d %s %f",&empno,name,&salary);
    printf("Empno: %d\n",empno);
    printf("Name: %s\n",name);
    printf("Salary: %f\n",salary);
}
    printf("\nEnd of file\n");
    fclose(fptr);

}






