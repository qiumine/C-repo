#include<stdio.h>
int *max(int *x,int *y)      /*����ǰ���*�ű��������ķ���ֵ��һ����ַ*/
{
	int *q;  /*����*q���������������ĵ�ַ*/
	if(*x>*y)
		q=x;
	else
		q=y;
	return(q);
}
void main()
{
    int a,b,*p;
	printf("������a,b����ֵ:");
	scanf("%d,%d",&a,&b);
	p=max(&a,&b);             /*�ô�p�������յ�ַʱ��max�Ͳ��ô�*����*/
	printf("%d,%d,max is %d\n",a,b,*p);

}