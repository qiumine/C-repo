#include<stdio.h>
void sum(int *x,int n)
{
	int i,s=0;
	int *t;
	t=x;  /*t��x��ָ�������һ��Ԫ��*/
	for(i=0;i<n;i++,x++)
		s+=*x;
	*(t+10)=s;   /*(t+10)ָ������Ԫ��a[10]*/
}
void main()
{
	int n,a[11]={1,2,3,4,5,6,7,8,9,10};
	int *p=a;
	printf("please input n(n<10):");
	scanf("%d",&n);
    sum(p,n);
	printf("ǰn�����%d\n",a[10]);
}
/*˫ָ������ñȽϺ�,Ӧ��ѧϰһ��*/