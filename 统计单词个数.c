#include<stdio.h>
void main()
{
	char string[100];
	int i,num=0,letter=0;
   /*letterΪ0��¼ǰһ״̬Ϊ�ո�letterΪ1��¼ǰһ״̬Ϊ�ַ�*/
    gets(string);
	for(i=0;string[i]!='\0';i++)     /*�����жϱȽϺã���Ϊһ���ַ����������ı�ǣ�����'\0'*/
	{
		if(string[i]==' '&&letter==1)
			letter=0;
        if(string[i]!=' '&&letter==0)
		{
		    letter=1;
			num++;
		}
	}
printf("There are %d words\n",num);
}

/*�˳���ȱ���ǲ��ܽ��������ȥ���ź�ѽ��*/