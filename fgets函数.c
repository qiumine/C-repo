#include<stdio.h>
void main()
{
	FILE *fp;

        /*�����ļ�ָ��*/
        /*����ָ��*p,��������fgets�����ķ���ֵ(��str����
        �ַ��ĵ�ַ)����p=str��&str[0]���ַ�����str�������������ļ����ַ�*/

	char *p,str[80];
	int i;
	fp=fopen("���.txt","r");
	/*fgets������fpָ����ļ��У����ļ�����6=7-1���ַ���str�У�����һ��'\0',�չ�7��*/
	p=fgets(str,7,fp);
	for(i=0;i<7;i++)
		printf("%c",str[i]);
	printf("\n");
	fclose(fp);
}
