#include<stdio.h>
void jhan(int *x,int *y)
{
	int t;
	if(*x>*y)
	{
		t=*x;
		*x=*y;
		*y=t;
	}

}
void bdx(int *x,int *y,int *z)
{
	jhan(x,y);
	jhan(x,z);
	jhan(y,z);
}
void main()
{
	int a,b,c;
	int *p=&a,*q=&b,*w=&c;            /*�ô�Ӧע�⣬int *p=&a,*q=&b,*w=&c; ��ǧ���д���ˣ�*/
	printf("��������������:");
	scanf("%d,%d,%d",p,q,w);
	bdx(p,q,w);
	printf("��С����˳��Ϊ%d,%d,%d\n",*p,*q,*w);
}