#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	/*ִ�иó��򣬱������һ��Դ�ļ�*/
	fp=fopen("D:\\�Ұ��� ���\\C Language\\�ļ������������\\�Ұ���.txt","r");        // ���ļ���·��������б�ܣ��мǣ�����
	/*ͨ���������ζ�ȡ�ļ�����*/
	ch=fgetc(fp);
	/*EOF����Ϊ-1�����ǿ�����ַ������仰˵����������ַ�����-1����EOF����
	��ʾ���������ַ������ļ�����*/
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	putchar(10);
	/*�ر�ָ�룬�����ر��ļ�*/
	fclose(fp);
}
/*�м�һ�����ֵ��������ֽ�*/
