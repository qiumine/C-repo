#include<stdio.h>
#include<string.h>
void main()
{
    char str[80];
    char *p1,*p2;
    p1=p2=str;
    printf("������һ���ַ�:");
    gets(str);
    /*ͨ�����ú���ʹָ��p1ָ���ַ������ĩ��*/
    /*�ô�Ҳ����ʹ��while(*p1!='\0')  p1++����ʵ��*/
    p1=str+strlen(str);
    /*ʹp1�Լ�һλ������ָ�����'\0'*/
    p1--;
    for(; p2<p1; p2++,p1--)
    {
        if(*p1!=*p2)
        {
            printf("���ǻ����ַ���\n");
            break;
        }
        else
        {
            printf("�ǻ����ַ���\n");
            break;
        }
    }
}
