#include<stdio.h>
void main()
{
	int i,j,a,b,w[4]={85,87,95,100},u[4]={100,95,98,100};
	printf("        ���˵�        \n");
	printf("----------------------\n");
	printf("----------------------\n");
	printf("  1.����ѧ���ɼ�\n");
	printf("  2.��ѯѧ���ɼ�\n");
	printf("  3.��ӡѧ���ɼ�\n");
	printf("  0.�˳�ϵͳ\n");
	printf("----------------------\n");
	printf("----------------------\n");
	printf("������ѡ���:");
	scanf("%d",&i);
	if(i==1)
	{
		printf("������:\n");
		scanf("%d",&a);
		if(a>=80)
			printf("����\n");
		else
            printf("������\n");
	}       
    else if(i==2)
	{
		printf("���������ѧ��ѧ��:");
		scanf("%d",&b);
		if(b==11031702)
		{
			printf("���� ������");
			printf("\n����  Ӣ��  �����  C����\n");
            for(j=0;j<4;j++)
			printf("%d     ",w[j]);
		}
		else if(b==11031717)
		{
			printf("������ʯ����");
			printf("\n����  Ӣ��  �����  C����\n");
            for(j=0;j<4;j++)
			printf("%d     ",u[j]);
		}
		else
			printf("����������������롣\n");
		printf("\n");
	}
	else if(i==3)
		printf("��������������ĵȴ�...\n");
	else if(i==0)
		printf("ллʹ�ã�\n");
	else
		printf("����������������롣\n");


}