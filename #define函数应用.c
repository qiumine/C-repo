#include<stdio.h>
#define PI 3.14159
#define L(r) PI*2*(r)         /*����Ԥ����ֱ�Ӷ��壬�ð�������*/
#define S(r) PI*(r)*(r)
void main()
{
	double area,circle,radius;     
	printf("������뾶��\n");
    scanf("%lf",&radius);        /*�������ʽ�ı�ʱ����ӦҲ�ı�*/
	circle=L(radius);
	area=S(radius);
	printf("circle is:\n %.5lf\narea is:\n %.5lf\n",circle,area); /*�������ʽ�ı�ʱ����ӦҲ�ı�*/
   
}