#include<stdio.h>
#include<string.h>
void sort(char *str[],int n)    /*"*str[]"Ҳ�ǽ���ָ������*/
{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)      /*������ѡ�񷨽�������*/
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(str[k],str[j])>0)   /*���ú���strcmp*/
				k=j;
			if(k!=i)
			{
				temp=str[i];
				str[i]=str[k];
				str[k]=temp;
			}
	}
}
void main()
{
	char *string[4]={"forver","Love","Basic","NUMBER"};
    /*ָ��������string����4���ַ����׵�ַ��string[o],string[1],string[2],string[3]*/
	int i,n=4;
    sort(string,n);
	for(i=0;i<n;i++)
		printf("%s\n",string[i]);/*��ʾָ�������е�i���ַ������׵�ַ*/
}