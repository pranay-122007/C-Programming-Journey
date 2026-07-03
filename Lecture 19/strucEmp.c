//structure in c
#include<stdio.h>
struct emp
{
	int eid;
	char name[20];
	float sal;
};
void main()
{
	struct emp e1;
	printf("Enter the details of emplyoyee\n");
	printf("Enter the eid: ");
	scanf("%d",&e1.eid);
	printf("Enter the name: ");
	scanf("%s",e1.name);
	printf("Enter the employ salary: ");
	scanf("%f",&e1.sal);
	printf("Display the details of emplyoyee: \n");
	printf("eid = %d\n",e1.eid);
	printf("ename = %s\n",e1.name);
	printf("esal = %f\n",e1.sal);
	
}
