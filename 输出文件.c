#include<stdio.h>
/*�м�ͷ�ļ����Ǻ�*/
#include<stdlib.h>
void main()
{
	/*����һ��ָ���ļ���ָ��*/
	FILE *fp;
	char ch,filename[10];
	scanf("%s",filename);
	/*Ϊ�����һ���ı��ļ�,'w'ֻд*/
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open this file\n");
		 /*exit�����ǹر������ļ�*/
		exit(0);
	}
	/*�������������scanf����������Ļس���*/
	ch=getchar();
	/*��������ĵ�һ���ַ�*/
	ch=getchar();
	/*���������ַ�����#�Ž���*/
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	/*������з��ţ�������printf("\n");*/
	putchar(10);
	/*ͨ���ر�ָ��ر��ļ�*/
	fclose(fp);
}