#include<stdio.h>
void main()
{
	int *p,i,a[10];
	p=a;
	printf("������10����:\n");
	for(i=0;i<10;i++)
	scanf("%d",p++);
	p=a;                 /*��������԰�p=a;ȥ��������һ����scanf("%d",p+i);*/
	for(i=0;i<10;i++)
	printf("%4d",*(p+i));
	printf("\n");

}
