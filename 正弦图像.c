#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,k;
	double x,y,s;
	s=2*3.14/40;
	for(x=0,i=1;i<=40;i++)
	{
		y=sin(x);
		k=(int)(40+30*y);        /*�Ե�40��Ϊx���꣬�������30��*/
		for(j=1;j<k;j++)         /*�sin(x)ͼ��ǰ�Ŀո�*/
		printf(" ");
        printf("*\n");         /*�м�Ҫ���У�����һ����Ϳ*/
		x+=s;
		
	}
}