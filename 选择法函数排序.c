#include<stdio.h>
void sort(int array[],int n)
{
	int i,j,k,t;
    for(i=0;i<n-1;i++)            /*������ѡ����С���Ĳ���*/
    {                    
		k=i;          /*������ŵ�����С�����±�*/
		for(j=i+1;j<n;j++)
			if(array[j]<array[k]) 
				k=j;
			t=array[k];
			array[k]=array[i];        /*��С��a[k]��a[i]����*/
			array[i]=t;
	}
}

void main()
{
	int a[10],i;
	printf("����������10������:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
	sort(a,10);        /*�ڴ����������������*/
 	for(i=0;i<10;i++)
    printf("%4d",a[i]);
	printf("\n");
}
