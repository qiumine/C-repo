#include<stdio.h>
#include <conio.h>
int girl(int w)
{
	int fac,i;
	for(i=1,fac=1;i<=w;i++)
	{
		fac*=i;
	}
	return(fac);
}
int frien(int m,int n)
{
	int haha,a,b,c;
	a=girl(m);
	b=girl(n);
	c=girl(m-n);
	haha=a/(b*c);
	return(haha);
}

int main()
{
	int m,n,y;
	printf("������m��n��ֵ:");
	scanf("%d,%d",&m,&n);
    y=frien(m,n);
	printf("һ����%d�ֽ��\n",y);
	getch();

}
