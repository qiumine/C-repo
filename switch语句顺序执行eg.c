#include<stdio.h>
void main()
{
	int k=5,n=0;
	do
	{
		switch(k)
		{
			case 1:  
		    case 3:n+=1;k--; break;
			default:n=0;k--;
		    case 2: 
			case 4:n+=2;k--;break;
		}
    	printf("%d",n);
	}while(k>0&&n<5);
	printf("\n");
}

/*������������235��case��default�����Բ���˳��д!���ڵ�һ��ѭ����������case��֧ƥ�䣬ִ��default��������default��֧��û��break��䣬������Ȼ����˳��ִ��*/