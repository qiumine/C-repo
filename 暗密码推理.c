#include<stdio.h>
#include<string.h>
void main()
{	/*const����������ʹencrypted[]��ֵ���ٸı䣬������������¸�ֵ����������*/
	const char encrypted[]="QRyTANAANAnYdcRgrwJE";
	char password[80];                /*��������Ļ�����*/
	char unencrypted[21];             /*δ��������*/
	int i=0;
	long code=0;
	for(;;)
	{
		strcpy(unencrypted,"wwwwwwwhijklmnopqrst");           /*��ʼ��*/
		printf("\nEnter your password of up to 20 characters(no spaces):\n");
		scanf("%s",password);                     /*��ȡ���������*/
		/*��ɼ��ܺͱȽ�*/
		for(i=0;i<20&&password[i]!='\0';i++)
		    unencrypted[i]=password[i];
		code=0;
		for(i=0;i<20;code+=unencrypted[i++])
			code%=52;
		code+=code<26?'A':('a'-26);
		for(i=0;i<20;i++)
		{
			code*=unencrypted[i];
			code%=52;
			code+=code<26?'A':('a'-26);
			password[i]=(char)code;
		}
		password[i]='\0';
		/*�ж��������ȷ���,if(!a)��if(a==0)�ȼ�*/
		if(!strcmp(password,encrypted))
		{
			printf("\nPassword ok.\n");
			break;
		}
		else
			printf("Incoorrect password.\n");
	}
}

/*������ʵ���ǶԱ������ַ���Ԥ���趨�����ַ��Ƿ���ȣ���Ϊ���밲ȫ�Կ��ǣ�
�������뱾��ҲҪ���ܣ������������ĳ��ֳ����У�password�������code�����롱��encrypted�����ܡ���˼*/