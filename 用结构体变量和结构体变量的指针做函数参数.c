#include<stdio.h>
#define N 3               /*ѧ����Ϊ3*/
/*�����ṹ�������ѧ�š�������3�ſγɼ���ƽ���ɼ�*/
struct student   
{
	int num;
	char name[20];
	float score[3];
    float aver;
};

void main()
{
	/*�������뺯��input���Խṹ�����Ϊ��������*/
	void input(struct student stu[]);
	/*�����ȽϺ����������ķ���ֵΪ�ṹ�����ͣ��Խṹ�����Ϊ��������*/
	struct student max(struct student stu[]);
	/*�����������print���Խṹ�����Ϊ��������*/
	void print(struct student stu);
	/*����ṹ�����飬ָ��ṹ���ָ��*/
	struct student stu[N],*p=stu;
	/*���ú���*/
	input(p);
	print(max(p));
}

/*����input����*/
void input(struct student stu[])
{
	int i;
	printf("�������ѧ������Ϣ��ѧ�š����������ſγɼ���\n");
	for(i=0;i<N;i++)
	{   /*���������Ϣ*/
		scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],/*�˴�stu[i].name���õ�ַ���ţ���Ϊ��Ϊ���飬��������*/
			&stu[i].score[1],&stu[i].score[2]);
		/*����֪������averƽ���ɼ�*/
			stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
}

/*����max����������ֵΪ�ṹ������*/
struct student max(struct student stu[])
{
    int i,m=0;
	/*�ñȽϵķ������ҵ�ƽ���ɼ����Ľṹ��*/
	for(i=0;i<N;i++)
		if(stu[i].aver>stu[m].aver)  m=i;
		return(stu[m]);/*����ֵΪ�ṹ�����*/
}

/*����print����*/
void print(struct student stud)
{
	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
	printf("ѧ��:%d\n����:%s\n���ſγɼ�:%5.1f,%5.1f,%5.1f\nƽ���ɼ�:%6.2f\n",stud.num,stud.name,
		stud.score[0],stud.score[1],stud.score[2],stud.aver);
}