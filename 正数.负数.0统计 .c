#include<stdio.h>
void main()
{
	int a,i,n,c1,c2,c3;
	c1=c2=c3=0;
    printf("������Ҫ�Ƚϵ����ĸ���:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>0)
			c1++;
		else if(a==0)
			c2++;
		else
			c3++;
	}
	printf("������%d��\n0��%d��\n������%d��\n",c1,c2,c3);
}