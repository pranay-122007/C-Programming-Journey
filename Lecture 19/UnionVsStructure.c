//union vs structure in c
#include<stdio.h>
struct emp1
{
	int eid;
	char name[20];
	float sal;
};
struct emp2
{
	int eid;
	char name[20];
	float sal;
};

void main()
{
	printf("Sizeof structure = %d\n",sizeof(struct emp1));
	printf("Sizeof union = %d\n",sizeof(union emp2));
}
