#include<stdio.h>
void main()
{
	struct student   /*������Ҫע����ǣ�student�ǽṹ�����ͣ����Ǳ���*/
	{
		int num;
		char name[20];
		char sex;
		char addr[20];
	} student1={10101,"jackie",'M',"HongKong"}; /*�������Ա��ʱ���ǵ����ţ���Ϊ�����sex�Ǳ����������ַ�����*/  
	/*�����student1���Ǳ�����*/
	printf("NO.:%d\nname.:%s\nsex.:%c\naddr.:%s\n",student1.num,student1.name,student1.sex,student1.addr);
}