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
void main()
{
	FILE *fp;
	int i;
	/*����ļ�,��b�Ļ����򿪶������ļ������ӵĻ����ı��ļ�*/
	fp=fopen(" stu_list","r");
	for(i=0;i<SIZE;i++)
		/*fread��������ʽΪfread(buffer�������ݴ�ŵ�ַ��sizeҪ��д���ֽ�����
		count��д���ٸ�size�ֽڵ������fp�ļ���ָ��);��������һ���Զ���һ�����ݣ�
		��fread��fwrite�������óɹ�����������ֵ��count��ֵ*/
	{
		fread(&stud[i],sizeof(struct student_type),1,fp);
		printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
}
