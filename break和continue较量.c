#include<stdio.h>
void main()
{
	char str[]="The C program",c;
	int i;
	for(i=2;(c=str[i])!='\0';i++)
	{
		switch(c)
		{
		     case 'g':++i;break;/*������һ��һ��������forѭ�������һ��i++���ʼ�������ָ��a*/
				 /*��break����switch֮�󣬲ſ���ִ��printf("*")*/
             case 'o':continue;/*ֻҪ��continue֮��Ķ���ִ��*/
			 default:printf("%c",c);
				 continue;/*������continue�����printf("*")��ִ��*/
		}
		printf("*");
	}
printf("\n");
}
