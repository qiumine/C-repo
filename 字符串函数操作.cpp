#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    char p1[20]="abcd",p2[20]="ABCD";
    char str[50]="xyz";
    
    strcpy(str+2,strcat(p1+2,p2+1)); 
    printf("%s\n",str);
    
    getch();
    return 0;
 }
// strcat(p1+2,p2+1)ִ��Ŀ�ľ���p2��BCD��ʼ���ӣ�֮ǰ�ľͲ�Ҫ�ˣ�����p1��cd��ʼ����ƴ�ӣ�֮ǰ�ľͲ�Ҫ�ˣ�
// Ȼ���ٿ�����str+2�ĺ��棬str+2����ľͲ�Ҫ�� 
