#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	/*�����ļ�ָ��*/
	if((fp=fopen("hello.txt","w"))==NULL)
	{
		printf("cannot open this file");
		/*��Ӹ�����ͷ�ļ��������#include<stdlib.h>*/
		exit(0);
	}
	/*fputs�������������ַ���*/
	fputs("�Ұ��㣡��֪����",fp);
	fclose(fp);
}
/*����ִ�к���Ļ��û��Ч���������ѽ����ļ�*/
