#include<stdio.h>
/*������κ꣬ע������������*/
#define MAX(a,b) ((a)>(b)?(a):(b))
void main()
{
	int a,b,c;
	printf("Input three numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("max=%d\n",MAX(MAX(a,b),c));
}