#include<stdio.h>
void main()
{int i,j;
float sum,a[5][5];
printf("������5��ѧ��4�ſγɼ���\n");

  for(i=0;i<5;i++)
  { 
	  sum=0;
	  printf("�����%d��ѧ���ĳɼ�:",i+1);               /*  printf("�����%d��ѧ���ĳɼ�:",i+1);Ӧ������ѧϰ������*/
	for(j=0;j<4;j++)
	{
		scanf("%f",&a[i][j]);
		sum+=a[i][j];
	}
	a[i][4]=sum/4;
  }
 printf("�����  C����  ����  Ӣ��  ƽ���ɼ�\n");
   for(i=0;i<5;i++)
  { 
  for(j=0;j<5;j++)
	  printf("%6.1f  ",a[i][j]);
  printf("\n");
   }
}





