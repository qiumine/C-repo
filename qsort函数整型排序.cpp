#include <stdio.h>
#include <stdlib.h>   // ���ÿ���������qsort����
#include <conio.h>

int cmp(const void *a, const void *b)     // ����Ҳ����ֱ��дint cmp(int *a, int *b),���治��ǿ��ת��  
{
    return *(int *)a - *(int *)b;            // �����Ƕ��������ݽ������� 
}                                            // ����return *(int *)b - *(int *)a;�ɴ�С���� 

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;
    qsort(x, 10, sizeof(x[0]), cmp);
    
    for (i=0; i<10; i++)                  // ��C���������i�����������ⶨ��i 
    printf("%d ", x[i]);
    
    getch();
    return 0;
}


/*qsort����ԭ��
  void qsort(void *base, size_t nelem, size_t width, cmp);
  *base��Ҫ��������飬nelem��Ҫ��������鳤�ȣ� width������Ԫ�صĴ�С�����ֽ�Ϊ��λ*/ 
