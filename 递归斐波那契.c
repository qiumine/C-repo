#include<stdio.h>
int fbnq(int n)
{
	if(n==1) return(1);
    else if(n==2) return(1);
	else return(fbnq(n-2)+fbnq(n-1));
}

void main()
{
	int n,m;
	printf("������һ������:");
    scanf("%d",&n);
	m=fbnq(n);
	printf("쳲�������%d����%d\n",n,m);
}
