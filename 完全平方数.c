#include<stdio.h>
#include<math.h>
void main()
{
	int a,i;
	for(i=34;i<100;i++)
	{
		a=i*i-1111;
		/*�÷���ͦ�ã������Ϳ���֪���ǲ�������*/
        if(sqrt(a)-(int)sqrt(a)==0)
			printf("����λ����%d\n",i*i);
	}
	
}
