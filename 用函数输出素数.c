#include<stdio.h>
#include<math.h>
int stf(int x)
{int i,k,p=1;
k=(int)sqrt(x);
   for(i=2;i<=k;i++)
   {  
	   if(x%i==0)                       /*����˼·�ܺã��÷���ֵp=1�� p=0�������ж��Ƿ�����*/
       p=0;
   }
	  return(p);             /*�Ǻ����涨��int stf(int x)���ͣ�����Ҫ����ֵreturn(p)*/
}


void main()
{
	int m,p;
	printf("������һ��������\n");
    scanf("%d",&m);
    p=stf(m);                /*�м�Ҫ��������ֵ�ٸ���һ����p������û�а취������һ���Ƚ�*/
	if(p==1)
		printf("����������\n");
	else
        printf("������������\n");
}