#include<stdio.h>
#include<string.h>
char my_strcpy(char * dst,const char *src);
main()
{
	char src[10],dst[10];
	printf("enter the string\n");
	scanf("%s",src);
	my_strcpy(dst,src);
	printf("%s",dst);
}
char my_strcpy(char * dst,const char *src)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		dst[i]=src[i];
	}
	dst[i]!='\0';
	return dst[i];
}
