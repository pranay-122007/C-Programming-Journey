//file handling in c
//file data delete
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int res;
	res = remove("NewFile.txt");
	if(res==0)
		printf("file deleted successfully!!");
	else
		printf("file not deleted Successfully!!");
}
