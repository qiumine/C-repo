#include<stdio.h>
/*�õ�exit����*/
#include<stdlib.h>
void main()
{
	FILE *in,*out;
	/*��������ģʽ�����ļ�����*/
	char infile[10],outfile[10];
	printf("Enter the infile name:\n");
	scanf("%s",infile);
	printf("Enter the outfile name:\n");
	scanf("%s",outfile);
	/*�������������ļ��������ü�˫���ţ������ļ�*/
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	/*��ֻд��ʽ�򿪣���������ļ�*/
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	/*��δ���ļ�������feof(fp)��ֵΪ0��!feof(fp)Ϊ1����ѭ����
	�ļ�����ʱ��feof(fp)��ֵΪ1��!feof(fp)Ϊ0���˳�ѭ��*/
	while(!feof(in))
		/*�ڴˣ�Ҳ����ʹ��while(ch!=EOF) {..;},EOF�ļ�������־*/
		fputc(fgetc(in),out);
	/*ʹ��fputc(ch,fp)������ch=fgetc(fp)���������ַ�һ���������ļ�������ļ�*/
	fclose(in);
	fclose(out);
}
/*���ƴ�����Ϣ��ǰ��������һ�ļ���Ȼ����Ҫ�����Լ��½���һ�ļ�*/