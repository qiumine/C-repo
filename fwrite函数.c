#include<stdio.h>
/*�궨�壬4��ѧ��*/
#define SIZE 4
/*����ṹ������*/
struct student_type
{
	char name[10];
	int num;
	int age;
	char addr[5];
}stud[SIZE];

/*���屣�溯��������ѧ�������Ϣ*/
void save()
{
	FILE *fp;
	int i;
	/*����ļ�*/
	if((fp=fopen("stu_list","w"))==NULL)
	{
		printf("cannot open this file\n");
		return;/*���ָ�ʽҲ�ԣ�Ҳ����ʹ��{exit(0);}��ʽ*/
	}
	for(i=0;i<SIZE;i++)
		/*fwrite��������ʽΪfwrite(buffer�������ݴ�ŵ�ַ��sizeҪ��д���ֽ�����
		count��д���ٸ�size�ֽڵ������fp�ļ���ָ��);��������һ���Զ���һ�����ݣ�
		��fread��fwrite�������óɹ�����������ֵ��count��ֵ*/
		if(fwrite(&stud[i],sizeof(struct student_type),1,fp)!=1)
			printf("file write error!\n");
		fclose(fp);
}

void main()
{
	int i;
	printf("����4��ѧ����������ѧ�š�����͵�ַ��\n");
	for(i=0;i<SIZE;i++)
		/*�������ݣ��Կո�����*/
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,&stud[i].addr);
	save();
}