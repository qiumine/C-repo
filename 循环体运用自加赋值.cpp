#include<stdio.h>
#include<string.h>
#include<conio.h>
void fun(char *w,int n)
{
     char t,*s1,*s2;
     s1=w;
     s2=w+n-1;
     while(s1<s2)
     {
         t=*s1++;             // �����ѵ������s1���ȸ�ֵ�����Լ����� 
         *s1=*s2--;           // �����Ϊ������t=++*s1�����Լ��ٸ�ֵ 
         *s2=t;
     }
}
 
int main()
{
    char a[8]="1234567";
    puts(a);
    fun(a,7);
    puts(a); 
    getch();
    return 0;
}
