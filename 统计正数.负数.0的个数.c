#include<stdio.h>
void main()
{
	int i,n,a[100],b=0,c=0,d=0;
	printf("������Ҫ�������ݵĸ�����");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)  /*��һ��ȽϺã�����forѭ�����޶�ͳ�Ƶĸ���*/
	{
		if(a[i]>0)
		b++;
	    else if(a[i]==0)
		c++;
	    else
		d++;

	}
printf("������%d��\n0��%d��\n������%d��\n",b,c,d);
}
