#include <iostream>
using namespace std;

int main()
{
   int a[4][5] = {0};
   a[2][3] = 1;
   int *p = &a[0][0];            // ����ֻ���Զ���Ϊ������int *p=a��
                                  // ���������ԣ�aΪ��ָ�룬a[0]Ϊ��ָ�� 
   cout << *(p+13) << endl;
   system("pause");
   return 0;
}
