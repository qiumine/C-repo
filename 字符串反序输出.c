#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0;
	char str1[10],str2[10];
	printf("������һ����ĸ:\n");
	gets(str1);
	i=strlen(str1)-1;       /*�м��Ǵ�0��ʼ�����ģ�����Ӧ�ü�һ*/
  while(str2[i]!='\0')
	str2[j++]=str1[i--];
	str2[j]='\0';
    printf("�������:\n");
	printf("%s",str2);
	printf("\n");
}