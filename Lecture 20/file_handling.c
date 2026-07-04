//file handling in c
//file create
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("NewFile.txt","w");
	if(fp==NULL)
	{
		printf("Error in file Creation!!!");
		exit(0);
	}
	printf("File Created Successfully!!!");
}
