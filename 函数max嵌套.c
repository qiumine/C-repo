#include<stdio.h>
int max(int x,int y)
{
	int z;
	z=(x>y?x:y);
    return (z);
}
int max_(int a,int b,int c,int d)
{
	int e;
	e=max(max(a,b),max(c,d));
	return(e);
}
void main()
{
	int m,n,p,q,f;
	printf("������4����:");
	scanf("%d,%d,%d,%d",&m,&n,&p,&q);
    f=max_(m,n,p,q);
	printf("�ĸ�������������%d\n",f);


}