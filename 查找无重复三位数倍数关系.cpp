/*============================Program Description==================================
purpose: ��1��9��Ÿ����ֳַ�3����λ��a,b,c��Ҫ���1����λ���������ǵ�2����λ����
         �������ǵ�3����λ�����������ó��������ô�֡�
author: Dong-Hong-Yan
created: 2012-10-06-22:00:00
===================================================================================*/

#include <stdio.h>
#include <conio.h>

int a[10]={0};

void Test(int num)
{   //sum = 0;
    if (num<0)
    {
        printf("��������");
    }
    else 
    {
        int i;
        while (num>0)
        {
            i = num%10;
            num = (num - i) / 10;
        //    sum *= i;
            a[i] = i;
        } 
    } 
} 

int isSuccess(int *a)
{
    for (int j=1; j<10; j++)
    {
        if (a[j] == 0)
        {
            return 0;
        }
                
    }
    return 1;
}

int main()
{
        int num1, num2, num3;
        int m, success;
        for (m=61; m<=165; m++)
        {   
            num1 = 2 * m;
            num2 = 3 * m;
            num3 = 6 * m;
          
            for(int j=0; j<10; j++)
            {
                a[j] = 0;
            }
            
            Test(num1);
            Test(num2);
            Test(num3);
            
            success = isSuccess(a);
            
            if (success == 1)
            {   
                printf("��������%d\n", num3);
                break;
            }              
        } 
   // for (int j=0; j<10; j++)
     //       printf("%d ", a[j]);
     if (success == 0)
     {
         printf("�Ҳ�������\n");
     }
     getch();
     return 0;
}  
