#include<stdio.h>
#include<string.h>
int search(char list[][20],char name[],int m)
{
	int i;
	for(i=0;i<m;i++)
	if(strcmp(list[i],name)==0)       /*����������������жϣ��·��Ƿ��Ӧ���ܲ���*/
		break;
	return(i+1);
}

void main()
{
    
	char month_list[12][20]={"january","february","march","april","june","july","august","september","october","november","december"};
    char month[20];
	int n;
	printf("������Ӣ���·�:\n"); /*��ʾ�Ի���Ӧ�÷��ڶ�������*/
    gets(month);   /*�ô������ַ�����ʽʱ������gets(month[20])��gets(month)����*/
    n=search(month_list,month,12);
    if(n<12)
    printf("%s��ʾ%d��\n",month,n);
}