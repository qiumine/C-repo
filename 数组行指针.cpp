#include<stdio.h>
#include <conio.h>
int main()
{
   int a[2][2]={1,2,3,4},(*p)[2];
   p=a;
   p++;
   printf("%d\n",**p ); 
 
   getch();
   return 0;
}

// ��������⣬�����**p�൱��*(*(a+1)+0)�������p����ָ�룬��aһ������ 
