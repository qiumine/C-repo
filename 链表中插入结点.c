#include<stdio.h>
/*���÷���ռ亯��*/
#include<malloc.h>
/*����ṹ������*/
struct node
{
	int data; /*���ݳ�Ա*/
	struct node *next;  /*����ָ��struct node���͵�ָ��*/
};

/*���庯��������Ϊ�����ֵΪ0ʱ����������������ֵΪ�ṹ��ָ��*/
struct node *create()
{   /*head���ڴ��ͷָ���ֵ��tail����ָ������ǰ��β��㣬p��ָ�������뵽���½��*/
	struct node *head,*tail,*p;
	int x;
	head=tail=NULL;
	printf("������һ������:");
	scanf("%d",&x);
	while(x!=0)
	{
		p=(struct node *)malloc(sizeof(struct node));
        p->data=x;
		p->next=NULL;
		if(head==NULL)
			head=tail=p;
		else
		{
			tail->next=p;
			tail=p;
		}
		printf("������һ������:");
		scanf("%d",&x);
	}
	return(head);
}

/*��������㺯�����Խṹ��ָ��Ϊ����*/
struct node *insert(struct node *head,int value)
{   /*nowΪָ��Ҫ����Ľ�㣬pָ�����λ�ô��Ľ�㣬qָ��p��ǰһ�����*/
	struct node *now,*p,*q;
	now=(struct node *)malloc(sizeof(struct node));
    now->data=value;
	p=head;
	/*�������ǿ�����ʱ,�൱���½�����*/
	if(head==NULL)
	{
		head=now;
		now->next=NULL;
	}
	else
	{   /*Ѱ�Ҳ���λ��*/
		while((p->next!=NULL)&&(p->data<value))
		{
			q=p;
			p=p->next;
		}
		if(p->data>=value)
		{   /*����ǿ�,ֻ��һ�����,���뵽��һ�����֮ǰ*/
		    if(head==p)
			{
		    	now->next=head;
		    	head=now;
			}
		    else
			{   /*����ǿ�,���뵽�����м�*/
		    	q->next=now;
		    	now->next=p;
			}
		}
		else 
		{  /*����ǿ�,���뵽�����β*/
			p->next=now;
			now->next=NULL;
		}
	}
	/*����ͷָ��*/
	return(head);
}

/*������,����Ҫ��˳������,Ȼ���ٲ����½��*/
void main()
{
	struct node *q;
	int value;
	/*q��������create�������ص�ָ��*/
	q=create();
	printf("������Ҫ���������:");
	scanf("%d",&value);
	/*������create�����ķ���ֵ��Ϊinsert�������β�*/
	q=insert(q,value);
	/*��ָ���������*/
	printf("The data of link:\n");
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->next;
	}
	printf("\n");
}


