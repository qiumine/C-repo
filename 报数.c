#include<stdio.h>
#define n 21
/*num����ÿһ���˵ı�ţ�nextָʾ��һ���˵ı��*/
struct person
{
	int num;
	int next;
}link[n+1];
/*����֮������link[22],  ��ʵֻ��link[0]��link[21],��link[0]����û����*/
void main()
{
	int i,count,h;
	/*Ϊÿһ���˱�ţ�����next�������ڵ��˵ı��*/
	for(i=1;i<=n;i++)
	{
		if(i==n)
			link[i].next=1;
		else
			link[i].next=i+1;
		link[i].num=i;
	}
	printf("\n");
	count=0;
	h=n;
	/*���ÿ���˳��˵ı��*/
	printf("sequence that persons leave the circle:\n");
	/*���˳���������n-1ʱ����������*/
	while(count<n-1)
	{
		i=0;
		/*i��ʾ��������h���ÿ�α�����������λ��*/
		while(i!=3)
		{
			h=link[h].next;
			if(link[h].num)
				i++;
		}
		/*�����ǰ������3���˳����˵ı��*/
		printf("%4d",link[h].num);
		/*���˳����˱����0��Ϊ�����ж�forѭ�������Ϊ0��ŵ����̵�*/
		link[h].num=0;
		count++;/*����˳��˵ĸ���*/
	}
	printf("\nthe last one is:");
	for(i=1;i<=n;i++)
		/*���������ѽ��˳��˱����0����ֻ��num��Ϊ0��ʱʣ�µ�*/
      if(link[i].num)
		 printf("%3d",link[i].num);
	 printf("\n");
}
