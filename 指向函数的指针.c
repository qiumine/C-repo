#include<stdio.h>
int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
    return(z);
}
void main()
{
	int a,b,c;
/*����ָ������ָ�����p���ú����ķ���ֵΪ����*/
	int (*p)();       
/*��ָ�����pָ����max()*/
	p=max;  
	printf("������a,b����ֵ:");
	scanf("%d,%d",&a,&b);
	c=(*p)(a,b);  /*������ȼ�c=max(a,b)*/
	printf("%d,%d,max is %d\n",a,b,c);
}



/*����ָ���������һ����������ڵ�ַ�����Ӽ������������*/