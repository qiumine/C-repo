#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char name[3][20],str[20];
    printf("������3������:\n");
    for(i=0;i<3;i++)                          /*����֮���Ծ��䣬����Ϊ�̻����ǵ��ô�����������gets��strcpy��strcmp��strlwr*/
    gets(name[i]);
                                               
    for(i=0;i<3;i++)
      strlwr(name[i]);

    if(strcmp(name[0],name[1])>0)
	{
		strcpy(str,name[0]);
	    strcpy(name[0],name[1]);
	    strcpy(name[1],str);
	}
	if(strcmp(name[0],name[2])>0)
	{
		strcpy(str,name[0]);
	    strcpy(name[0],name[2]);
	    strcpy(name[2],str);
	}
	if(strcmp(name[1],name[2])>0)
	{
		strcpy(str,name[1]);
	    strcpy(name[1],name[2]);
	    strcpy(name[2],str);
	}
	printf("˳�����3������:\n");
    for(i=0;i<3;i++)
	printf("%s\n",name[i]);
    
}
