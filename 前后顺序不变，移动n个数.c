#include<stdio.h>
void move(int array[20],int n,int m) /*�õݹ鷨���к���*/
{
	int *p,array_end;
	array_end=*(array+n-1);  /*�����������һ��Ԫ�أ��Ⱦ��ߣ��Ǻ����������һ��Ԫ�ز���д��(array+10),��ֻ�ǵ�ַ*/
	for(p=array+n-1;p>array;p--)
	     *p=*(p-1);
	*array=array_end;    /*��ǰ����������һ������ûʱ����ͷ�Ѿ�����������һ����ĸ�ﱣ����*/
	m--;
	if(m>0)      /*m�ڴ�Ϊ���Ƶ�λ��*/
		move(array,n,m);
}
void main()
{
	int a[20],i,c,k;
	printf("�������������:");
	scanf("%d",&c);
    for(i=0;i<c;i++)
		scanf("%d",&a[i]);
	printf("������Ҫ���Ƶĸ���:");
	scanf("%d",&k);
	move(a,c,k);
	for(i=0;i<c;i++)
	printf("%4d",a[i]);
	printf("\n");

}