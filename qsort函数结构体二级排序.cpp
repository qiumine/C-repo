#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct coord
{
    int x;
    int y;
}data[100];       

int cmp(const void *a, const void *b)         // ����Ҳ���԰Ѳ������Ͷ���Ϊstruct coord *,�����о��棬���� 
{
    if (((struct coord *)a)->x != ((struct coord *)b)->x)
        return ((struct coord *)a)->x - ((struct coord *)b)->x;       // ����x��С�������򣬵�x���ʱ����y�Ӵ�С���� 
    else
        return ((struct coord *)a)->y - ((struct coord *)b)->y;
}

// �������� 
int main()
{
    int sum = 0, n;
    int i;
    
    freopen("in.txt", "r", stdin);         // �������ļ�ͬ�����мǣ���������һ�仰 
    
    while (scanf("%d", &n) !=EOF && n)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d %d", &data[i].x, &data[i].y);
            
        }
        printf("\n");
        for (i=0; i<n; i++)
        {
            printf("   %d %d", data[i].x, data[i].y);
            
        }
        qsort(data, n, sizeof(data[0]), cmp);              // 
        
	       printf("\n");
        for (i=0; i<n; i++)
        {
            printf("   %d %d", data[i].x, data[i].y);
            
        }
        printf("\n");
	}
    getch();
    return 0;
}
