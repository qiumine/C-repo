#include<stdio.h>
void main()
{float ave,sum=0,a[10];
int i;
printf("������10��ѧ���ɼ�\n");
  for(i=0;i<10;i++)
  {
	scanf("%f",&a[i]);
	sum+=a[i];
  }
  ave=sum/10;
  printf("ƽ���ɼ���%.2f\n",ave);

}







/*����������Ϊ������ʱ�������ʽӦ��%d��Ϊ%f*/