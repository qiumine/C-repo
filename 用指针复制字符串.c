#include<stdio.h>
void main()
{
	char a[]="i am a teacher!",b[30];
	char *p=a,*q=b;            /*�ڱ�������Ҳ���Բ���p��q��һ���е�ͨ��*/
	int i=0;
	while(*(p+i)!='\0')
	{
       *(q+i)=*(p+i);
		   i++;
	}
    *(b+i)='\0';
	for(i=0;b[i]!='\0';i++)
    printf("%c",b[i]);
	printf("\n");
}
