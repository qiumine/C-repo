#include<stdio.h>
/*sum()�����������ָ��qָ������ݿ�ʼ����n���������ݵĺ�*/
int sum(int *q,int n)
{
	int i,s=0;
	for(i=0;i<n;i++,q++)
		s+=*q;
	return(s);
}

void main()
{
	int m,n,a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	printf("please input m and n(m<n<10):\n");
	scanf("%d,%d",&m,&n);
	p=a+m-1;/*�����±��Ǵ�0��ʼ,���Ե�m��Ԫ���±�Ϊm-1,��ַΪa+m-1*/
	printf("%d\n",sum(p,n-m+1));
	/*�����������������������ĺ�,ʵ���ϼ������3,4,5��5-3+1�����ĺ�*/


}