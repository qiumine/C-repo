#include<stdio.h>
/*�ڳ���ĵ�һ�к궨���У�����CHANGE��ʾ�ַ���1����ʵҲ����
Ϊ�κ��ַ����������������κ��ַ�����дΪ��#define CHANGE
 ֻ��ȡ������ĵ�һ��#define CHANGE 1,�Ż�ȥ����ڶ���for��䡣*/
#define CHANGE 1
void main()
{
	char str[80]={0};
	int i;
	printf("Ҫ�󣺵籨���룬��CHANGEΪ1��ԭ���������CHANGEΪ0��ÿ����ĸ����һλ\n");
	printf("please input a string=");
	gets(str);
    #ifdef CHANGE /*�ô�Ҳ���Ը�Ϊ���ʽ��ǰ����#if����*/
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=(str[i]+1>'z')?'a':str[i]+1;
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=(str[i]+1>'Z')?'A':str[i]+1;
	}
    #else
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=(str[i]+1>'z')?'a':str[i]-1;
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=(str[i]+1>'Z')?'A':str[i]-1;
	}
    #endif  /*��Ϊ�����ı�־������ʡ*/
	puts(str);
}
/**/
