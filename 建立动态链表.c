#include<stdio.h>
/*��malloc���������µ�Ԫʱ��Ҫ�ô�ͷ�ļ�*/
#include<malloc.h>
/*��LEN����struct student�������ݵ��ֽ���*/
#define LEN sizeof(struct student)
/*����struct student����*/
struct student
{
	int num;   /*ѧ��*/
	float score;  /*�ɼ�*/
	struct student *next;  /*ָ�������Ա*/
};

void main()
{   /*����ָ�����head��p*/
	struct student *head,*p;
	printf("��ֱ�����2��ͬѧ��ѧ�źͳɼ���\n");
	/*�����ǽ�������*/
	/*�����µ�Ԫ����p��headָ����*/
	head=p=(struct student *)malloc(LEN);
	/*�����һ���������*/
    scanf("%d,%f",&p->num,&p->score);
	/*���ٵڶ����µ�Ԫ����pָ����*/
	p=(struct student *)malloc(LEN);
	/*����ڶ����������*/
	scanf("%d,%f",&p->num,&p->score);
	/*ʹ��һ������е�next��Աָ��ڶ������*/
	head->next=p;
	/*ʹ�ڶ�������е�next��Ա��ָ���κζ���*/
	p->next=NULL;
    /*�����������е�����*/

	p=head;/*ʹpָ���һ������е�����*/
	printf("\n���1:%d,%6.2f\n",p->num,p->score);
    /*ʹpָ��ڶ������*/
	p=p->next;
	printf("���2:%d,%6.2f\n",p->num,p->score);
}
/*����ֻ�������������*/