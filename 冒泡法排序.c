#include<stdio.h>
void main()
{
	int i,j,t,a[10];
	printf("������10����:\n");
    for(i=0;i<10;i++)
	
		scanf("%d",&a[i]);
        for(j=0;j<9;j++)
			for(i=0;i<9-j;i++)         /*�˴�Ϊð�ݷ��������״�ط����мǵ�i��jȡֵ��Χ*/
				if(a[i]>a[i+1])
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
printf("the sorted number is:\n");
for(i=0;i<10;i++)
printf("%4d",a[i]);
printf("\n");
}