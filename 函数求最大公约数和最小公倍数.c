#include<stdio.h>
int zdg(int x,int y)
{
    int c;
    while(x%y!=0)             /*�����е�ʱ���� while(x%y!=0) ����Ҫ��for����ʹ����Ȼ����ת��*/
    {
        c=x%y;
        x=y;
        y=c;
    }
    return(y);

}
int zxg(int x,int y)
{
    int p;
    p=zdg(x,y);               /*��Ҫǿ��������ú���ʱ���õ��ǲ�����ʽ�������������*/
    p=(x*y)/p;
    return(p);
}



void main()
{
    int m,n,l,q;
    printf("������������:\n");
    scanf("%d,%d",&m,&n);
    l=zdg(m,n);
    printf("���Լ����%d\n",l);
    q=zxg(m,n);
    printf("��С��������:%d\n",q);
}




