#include<stdio.h>
#include<string.h>
void main()
{
	char name[3][30];
    int i;
	printf("������3������:\n");
    for(i=0;i<3;i++)
        gets(name[i]);  /*name�൱��һ��1ά���飬�����ʽͦ�ã��Ǻ�*/
	printf("�������:\n");
	for(i=0;i<3;i++)
     	puts(name[i]);
}