#include <stdio.h>
#include <conio.h>
int main()
{
    long long a, b, count = 0;           // ���ﶨ��long long���͵ı����Ƿ�ֹ���

    //printf("%d %d %d\n", sizeof(long long), sizeof(long), sizeof(int);  8 4 4
    //printf("%d %d %d\n", sizeof(long double), sizeof(double), sizeof(float)); // 12 8 4

    while(scanf("%lld %lld", &a,&b) == 2)       // scanf�����ķ���ֵ����������ĸ��� ,�������Ƿ����ݣ���1 a���������
    {
        if (count!=0)
        {
            printf("\n");
            printf("%lld", a*b);
        }
        else
        {
            printf("%lld", a*b);
        }
        count = 1;
    }
    getch();
    return 0;
}
