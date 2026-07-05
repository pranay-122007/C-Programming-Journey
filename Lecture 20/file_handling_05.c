//file handling in c
//file data read string
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
	char ch[1000];
	//fscanf(fp,"%s",ch);
	fscanf(fp,"%[^\n]s",ch);
	printf("%s",ch);
	printf("\nData read Successfully!!!");
	fclose(fp);
}
