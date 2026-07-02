//string problems : strcpy :
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int len=0,i;
	printf("enter the string: ");
	gets(str1);
	printf("Original string = %s\n",str1);
	//length
	while(str1[len]!='\0')
	{
		len++;
	}
	//copy the string
	for(i=0;i<len;i++)
	{
		str2[i]=str1[i];
	}
	printf("Copy string = %s\n",str2);
}
