#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cmp(char *a, char *b)
{
    return *a - *b;
} 

int main()
{
    char ch[10] = "bcadfegihj";          // ������ô���� 
    int i;
    qsort(ch, 10, sizeof(ch[0]), cmp);
    
    for (i=0; i<10; i++)
    printf("%c ", ch[i]);
    
    getch();
    return 0;
}

// char ch[10] = "bcadfegihj"; ������ô���壬sizeof(ch)ռ10�ֽ�,���Դ���ֻ���ַ��������ַ��������� 
// char ch[] = "bcadfegihj";  �����ô���壬sizeof(ch)ռ11�ֽ�  ���Ƕ����� 
/* int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}                                                      ����Ҳ��Ŷ 
*/
