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
	fgets(ch,1000,fp);
	printf("%s",ch);
	printf("\nData read Successfully!!!");
	fclose(fp);
}
