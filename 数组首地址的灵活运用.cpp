#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   int a[]={8,1,2,5,0,4,7,6,3,9};
   printf("%d", a[*(a+a[1])]);     
   
   system("pause");
    return 0;
}


/* ���������������� printf("%d", a[*(a)]);
1����������Ļ��������a��ָ�룬�����ַ��*a=8��a[8]=3 

 ��������Ҫ������� printf("%d", a[*(a+a[1])]); 
2����������Ļ��������a��ָ�룬�����ַ��*(a+a[1])=*(a+1),
ָ����һ��Ԫ�أ�a[1]=1���ɽ� 
*/
