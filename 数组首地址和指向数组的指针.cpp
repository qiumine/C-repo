// �����׵�ַ��ָ�������ָ��Ĳ�ͬ�����ز�ͬ 
#include <stdio.h>
#include <conio.h>
int main()
{
 int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

 int *p=a;
 int i, j;
 for (i=0; i<3; i++)
 {
     for (j=0; j<4; j++)
     printf("%d ", *(p+i*4+j));      // ���ﶨ��ָ��pָ��a��p��a�����岻ͬ 
                                     // д��printf("%d ", *(a+i*4+j));�������� 
 }
 
 printf("\n");
 getch();
 return 0;
}
