#include<stdio.h>
void main()
{
	int i,n,flag;
	float sum=0;
    printf("��1/1-1/2+1/3-1/4+...+1/n,������һ��nֵ:");
	scanf("%d",&n);
	for(i=1,flag=1;i<=n;i++)
	{
		sum+=(float)flag/i;
		flag=-flag;
	}
printf("ǰ%d���Ϊ%.3f\n",n,sum); /*ע���ʽ�������ҲӦ��Ϊ%��3f*/
}