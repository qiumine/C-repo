#include<stdio.h>
/*���÷���ռ�ĺ���*/
#include<malloc.h>
#define NULL 0
struct node
{
	int data; /*���ݳ�Ա*/
	struct node *next;  /*����ָ��ṹ���ָ���Ա*/
};

/*���庯���ķ���ֵΪ�ṹ��ָ���ͱ���*/
struct node *create()
{   /*��������ָ�룬head���ͷָ�룬tail��ŵ�ǰ��β��㣬p����ָ��������Ľ��*/
	struct node *head,*tail,*p;
	int x;
	/*��head��ֵ����ΪNULL����λ���������ν���ȥ*/
	head=tail=NULL;
	printf("������һ������:");
	scanf("%d",&x);
	while(x!=0)
	{
		p=(struct node *)malloc(sizeof(struct node));
		/*�Ѹ������ֵ��������½���������*/
		p->data=x;
		p->next=NULL;
		/*�����ж��ǲ��ǵ�һ�����*/
		if(head==NULL)
			head=tail=p;
		else
		{  /*ʹβ����next��Աָ���µĽ��*/
			tail->next=p;
			/*��p����tail��ʹ�½���Ϊ�µ�β���*/
			tail=p;
		}
		printf("������һ������:");
		scanf("%d",&x);
	}
	/*��ͷָ�뷵�أ�˳�����ϣ�����ȥ*/
	return(head);
}


void main()
{
	struct node *q;
	/*q�������պ����ķ���ֵ*/
	q=create();
	printf("The data of link :\n");
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		/*ʹqָ����һ���ڵ�*/
		q=q->next;
	}
    printf("\n");
}