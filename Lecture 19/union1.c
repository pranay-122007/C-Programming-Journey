//union vs structure in c
#include<stdio.h>
union emp
{
	int eid;
	float sal;
};
void main()
{
	union emp e1;
	printf("Enter the details of emp\n");
	printf("Enter eid: ");
	scanf("%d",&e1.eid);
	printf("Enter sal: ");
	scanf("%f",&e1.sal);
	printf("Display the details of emp: \n");
	printf("eid = %d\n",e1.eid);
	printf("esal = %f\n",e1.sal);
}
