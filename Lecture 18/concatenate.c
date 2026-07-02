//string problems : strcpy :
#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int len1=0,len2=0;
	printf("enter the string1: ");
	gets(str1);
	printf("enter the string2: ");
	gets(str2);
	printf("Original string = %s\n",str1);
	printf("Original string = %s\n",str2);
	//length
	while(str1[len1]!='\0')
	{
		len1++;
	}
	//conactenate the string
	while(str2[len2]!='\0')
	{
		str1[len1]=str2[len2];
		len1++;
		len2++;
	}
	str1[len1]='\0';
	printf("new concatenate string = %s \n",str1);
}
