#include<stdio.h>
int row,cloumn;         /*����ȫ�ֱ���row,cloumn*/
void main()
{
    float highest_score(float array[4][5]);
	float score[4][5]={{61,73,85.5,87,90},{72,84,66,88,78},{75,87,93.5,81,96},{65,85,64,76,71}};
    printf("the highest score is %6.2f\n",highest_score(score));
    printf("Student NO.is %d\nCourse NO.is %d\n",row+1,cloumn+1);
}
float highest_score(float array[4][5])
{
	int i,j;
	float max;
    max=array[0][0];
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			if(array[i][j]>max)      /*�����ﺯ������ֵֻ����һ��*/
			{
				max=array[i][j];  /*��Ҫ�����ֵ,(һ)��ȫ�ֱ���(��)�ں��������*/
				row=i;
				cloumn=j;
			}
			return(max);
}