#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct coord {           // ���͵ĺ����Խṹ����������ţ����� 
    int x;
    int y; 
}data[100]; 

int cmp(const void *a, const void *b)                      // ��ס���ﺯ��cmp�ķ���ֵ�����ͣ�һֱ�������� 
{
    return ((struct coord *)a)->x - ((struct coord *)b)->x;       // �������֪��->�����ȼ�����type  
} 
// ����ܳɹ���������xΪ׼����������ˬ�գ����� 


int main()
{
    int sum = 0, n;
    int i,j;
    
    while (scanf("%d", &n)!=EOF && n)       // ���nΪ���˳�ѭ�� 
    {
        for (i=0; i<n; i++)
        {
            scanf("%d %d", &data[i].x, &data[i].y);
        } 
        for (i=0; i<n; i++)
        {
            printf("    %d %d", data[i].x, data[i].y);
        }
        printf("\n");
        qsort(data, n, sizeof(data[0]), cmp); 
        for (i=0; i<n; i++)
        {
            printf("    %d %d", data[i].x, data[i].y);
        }
        printf("\n");
    }
    
    getch();
    return 0;
        
} 

/* �����cmp������������ôд 
int cmp(struct coord *a, struct coord *b)                      // ��ס���ﺯ��cmp�ķ���ֵ�����ͣ�һֱ�������� 
{
    return a->x - b->x;       // ���������ˣ�OK!!!  
}*/ 
