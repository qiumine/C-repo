/*==============================Program Description==================================
purpose: �����Ĺ�������һά����a�в���xֵ�����ҵ����򷵻����ڵ��±�ֵ�����򣬷���0��
author: Dong-Hong-Yan
created: 2012-10-05 21:09:10
=====================================================================================*/

#include <iostream>
using namespace std;

int funa(int *a, int n, int x)
{
    *a = x;         // ��Ҫ���ҵ�ֵ������a[0]��λ�� 
    n = n-1;
    while(a[n] != x) n--;      // ������Ҳ�����n�պ�Ϊ0 
    cout << a[0] << endl;
    return n;
} 

// �������� 
int main()
{    
    int a[11]={0,1,2,3,4,5,6,7,8,9,10};
    int b = funa(a,11,11);
    cout << b << endl; 
 
    system("pause");
    return 0;
}
