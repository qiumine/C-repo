#include <stdio.h>
//#include <iostream>
#include <algorithm>         // ��һ������c++�ļ������ü�.h
#include <conio.h>

bool cmp(int s, int t)
{
	if (s>t)
		return true;                      // ��������һ��д�����������Զ���cmp��������ʹ���ɴ�С����
	else
		return false;
}

int main()
{
    int x[10] = {6,5,4,7,0,1,9,2,8,3};
	   std::sort(x, x+10, cmp);             // ����sort����ʽstd�����ռ�ĺ���  ���ú���ֻ���˺������ֶ���
    int i; 
    for (i=0; i<10; i++)
    printf("%d  ", x[i]);
    
    getch();
    return 0;   
}

// �����һ��˼·���ǣ�ֱ��std::sort(x, x+10)�����������У����ú���
