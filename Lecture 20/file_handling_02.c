//file handling in c
//file data write
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("abc.txt","w");
	//fp=fopen("NewFile.txt","a");
	if(fp==NULL)
	{
		printf("Error in file Creation or File Opening!!!");
		exit(0);
	}
	char ch[1000];
	printf("Enter the String!! ");
	gets(ch);
	//fputc(ch, fp);
	fprintf(fp,"%s",ch);
	printf("Data Write Successfully!!!");
	
	fclose(fp);
}
