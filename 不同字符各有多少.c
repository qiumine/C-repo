#include<stdio.h>
void main()
{
	char c;
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	char *p=&c;
	while((c=getchar())!='\n')
	{
		if((*p>'A')&&(*p<'Z'))
			c1++;
		else if((*p>'a')&&(*p<'z'))
			c2++;
		else if(*p==' ')
			c3++;
		else if((*p>'0')&&(*p<'9'))
			c4++;
		else
			c5++;
	}
printf("��д��ĸ��%d��Сд��ĸ��%d���ո���%d��������%d��������%d\n",c1,c2,c3,c4,c5);

}