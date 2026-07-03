//Array of structure in c
#include<stdio.h>
struct emp
{
	int eid;
	char name[20];
	float sal;
};
void main()
{
	struct emp e1[5];
	int i;
	printf("Enter the details of emplyoyee\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the eid: ");
		scanf("%d",&e1[i].eid);
		printf("Enter the name: ");
		scanf("%s",e1[i].name);
		printf("Enter the employ salary: ");
		scanf("%f",&e1[i].sal);
	}
	printf("Display the details of emplyoyee: \n");
	for(i=0;i<5;i++)
	{
		printf("eid = %d\n",e1[i].eid);
		printf("ename = %s\n",e1[i].name);
		printf("esal = %f\n",e1[i].sal);
	}
}
