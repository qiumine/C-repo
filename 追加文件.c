#include<stdio.h>
/*��Ϊ����exit���������ø�ͷ�ļ�*/
#include<stdlib.h>
void main()
{
	FILE *fp;//�����ļ�ָ��
	char ch;
	if((fp=fopen("hello.txt","a"))==NULL)
	{
		printf("cannot open this file\n");
		/*�ڴ�Ҳ����ʡȥexit��������return;����*/
		exit(0);
	}
	/*��������ĵ�һ���ַ�*/
	ch=getchar();
	/*�����ַ����ԡ�#������*/
	while(ch!='#')
	{
		/*���ַ�һ��������ļ�*/
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);

}