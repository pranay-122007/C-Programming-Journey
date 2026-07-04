//file handling in c
//file data read
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("NewFile.txt","r");
	if(fp==NULL)
	{
		("File not exist!!!");
		exit(0);
	}
	char ch;
	ch = fgetc(fp);
	printf("Char %c\n",ch);
	printf("Data read Successfully!!!");
	fclose(fp);
}
