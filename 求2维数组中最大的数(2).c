#include<stdio.h>
void main()
{int i,j,a[5][4],max=0;
    for(i=0;i<5;i++)
	{printf("�������%d����,ÿ��4����\n",i+1);
         for(j=0;j<4;j++)
		 { scanf("%d",&a[i][j]);
		 if(max<a[i][j])
			 max=a[i][j];
		 }
	}
printf("the biggest number is:\n %d\n",max);
}