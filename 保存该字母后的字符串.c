#include<stdio.h>
void string_cut(char *str,char ch)
{ /*��Ϊע�����forѭ������һ���ֺţ�������ѭ����ִ��*/
    for(;*str!='\0'&&*str!=ch;str++);  
	/*������*str!=ch,ch���õ�����������!!!*/
	puts(str);              /*��*str�������������е�����һ��ʱ��������ѭ�������������ַ���*/
}
void main()
{
	char string[20]="beijing";
	char ch;
	printf("beijing\n");
	printf("������Ҫ�������ĸ����ַ���:");
	ch=getchar();               /*�ô�Ҳ������scanf��������ch�������õ���%c��ʽ*/
	string_cut(string,ch);

}