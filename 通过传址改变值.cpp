#include <stdio.h>
#include <iostream>
void fun(int *n)             // �������ؿ����Ǿ�̬�洢������������������� 
{ 
    static int m = 2;        // ÿ�ε��ú�������̬����m��ֵ�ڳ���������ڷſ� 
    *n *= m-1;               // m���ۼӵ����� ������m���Ի����ã� 
    m += 2;
}
 
 int main()
 {
    static int m=1;
    int i;
    for(i=1;i<4;i++)
    fun(&m);            // ����ͨ��Ѱַ���㣬��ӵĸı��˱���m������������ֵ 
    printf("%d\n",m);
   
    system("pause");
    return 0;
 }
