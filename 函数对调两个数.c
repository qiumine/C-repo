#include<stdio.h>
void change(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("%d,%d\n",x,y);       /*�ò�����ȥ����ԭ����*/
	
}


void main()
{
	int m,n;
	printf("������������:\n");
    scanf("%d,%d",&m,&n);
    change(m,n);
    printf("%d,%d\n",m,n);

}