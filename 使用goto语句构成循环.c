#include<stdio.h>
void main()
{
	int sum,x;
	sum=0;
	printf("�ۼ�x��ֵ�ĺ�\n");
NEXT:
	printf("x=");
	scanf("%d",&x);
	if(x==0)
		goto END;
	sum+=x;
	goto NEXT;
END:
	printf("sum=%d",sum);
	printf("\n");
}

/*goto�����Ƴ�����ת*/