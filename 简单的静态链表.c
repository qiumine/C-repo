#include<stdio.h>
#define NULL 0
/*�����ṹ������struct student*/
struct student 
{
	int num;
	float score;
	struct student *next;/*����nextΪָ��ṹ���ָ��*/
};

void main()
{   /*���������ṹ�������Ϊ����Ľ��*/
	struct student a,b,c,*head,*p;    
	a.num=10101;a.score=89.5;          /*��a,b,c��Ա����ֵ*/
	b.num=10103;b.score=90;
	c.num=10107;c.score=85;
	/*�����a����ʼ��ַ����ͷָ��head*/
	head=&a;   
	/*�����b����ʼ��ַ����a���next��Ա*/
	a.next=&b;
	/*�����c����ʼ��ַ����b���next��Ա*/
	b.next=&c;
	/*���c��next��Ա�������������ַ*/
	c.next=NULL;
	/*ʹpҲָ��a���*/
	p=head;
	do
	{
		printf("%ld%5.1f\n",p->num,p->score);
		/*ʹpָ����һ��㣬�൱��p=&a;p=&c*/
		p=p->next;
	}while(p!=NULL);
}
