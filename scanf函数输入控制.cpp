#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    char ch[103];
    scanf("%d,%s ,%d", &a, ch, &b);     // �������ĸ�ʽ����%s����ȷ 
    printf("%d,%s,%d", a, ch, b);       // �ո�û�ж��룬ֻ������ֹ%s���� 
                        // _,123ֻ��ƥ��"_,123",����ƥ��",123"   "_"�ո����˼ 
    getch();
    return 0;
}

// scanf("%d %c%d", &a, &ch, &b); �����°�ch���ɿո��ȡ 
