/*===========================Program Description=================================
purpose: �����ռ���������.cpp 
author: Dong-Hong-Yan 
created: 2012/10/03 21:50:08
================================================================================*/
#include <stdio.h> 
#include <math.h>
#include <iostream>

int a=2;              // ����aΪȫ�ֱ��� 

/* ����Ӧ�ü��ţ��������ָ�룬���ص�ֵ(x����5)����
����������ָ�� ������֮�󣬼�ס���Ƿ���5֮��a���Լ��� 
int f()
{
 int x=5;
 return x++;
 }
*/ 
int f(int *a)           // ���庯�� 
{
      return(*a)++;        
}

int main()
{
      int s=0;
      {
          int a=5;
          s+=f(&a);           // ����Ļ��������a����Ϊ6 
      }
    
      s+=f(&a);       // ����ͺ�������޹��ˣ�a���Լӣ����Ϊ3 
      printf("%d %d\n",a,s);
     
      system("pause");
      return 0;
}
