#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	fp1=fopen("���.txt","r");
	fp2=fopen("��Ȼ.txt","w");
	while(!feof(fp1))
		putchar(fgetc(fp1));//�������ʾ��Ļ��fp1λ���ļ�ĩβ
	//rewind����ֻ��fp1ָ�����¶�λ����ͷ��feof��ֵ�ָ�Ϊ0
	rewind(fp1);
	while(!feof(fp1))
		fputc(fgetc(fp1),fp2);
	putchar(10);
	fclose(fp1);
	fclose(fp2);
}