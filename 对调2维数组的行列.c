#include<stdio.h>
void main()
{
	int i,j,t,a[2][3];
	printf("���������ݣ�\n");
    for(i=0;i<2;i++)
	{
		printf("�������%d�����ݣ�ÿ��3����\n",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
		printf("����ǰ������array��\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	    printf("%5d",a[i][j]);
		printf("\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=a[i][j];
		}
		printf("���к��������array��\n");
          
    for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)       /*����ṹ�Ѹı䣬ע�⽫i��j�ķ�ΧҲ�ı�*/
	    printf("%5d",a[i][j]);
		printf("\n");
	}

printf("\n");
} 
}