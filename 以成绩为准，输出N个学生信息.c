#include<stdio.h>
#define N 5
struct student
{
	int num;
	char name[20];
	float score;
};       /*�ô��ֺŲ�����ʡ��!!!*/
void main()
{
	struct student stu[5]={{10101,"ling",73.5},{10102,"wang",98},	{10103,"dong",100}	,{10104,"chen",95},	{10105,"jing",90}};
    struct student temp; /*Ҳ����ͨ���÷������нṹ���ʼ��*/
	int i,j,k;
	printf("The order is:\n");
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(stu[j].score>stu[k].score)
				k=j;
			temp=stu[i];        /*ѡ�񷨽���Ԫ��Ū���ˣ���i��k����*/
			stu[i]=stu[k];
			stu[k]=temp;
	}
	for(i=0;i<N;i++)
		printf("%6d%8s%6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	printf("\n");
}