#include<stdio.h>
void main()
{	/*����Ϊѭ����9��λ�á���ҡ������λ�ã����ţ����ڼ��š��ڼ��С�ֱ�ߡ�Ӯ�ң���1��2��*/
	int i=0,player=0,go=0,row=0,column=0,line=0,winner=0;
	char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	/*��ѭ���ɹ��Ļ�����winner���յ�ȡֵ1��2����ѭ�����������Ļ���i=9�������������˳�ѭ��*/
	for(i=0;i<9&&winner==0;i++)
	{
		/*�����ʼ���̣���������ÿ�����Ӻ����̵ĸ�֣����һ�����������*/
		printf("\n\n");
		printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);	
		/*�Ը÷�����ȷ�����1��2����������*/
		player=i%2+1;
		/*��ѭ����ִ�б��������Ҽ���λ�ó���ʱ���������ַ��д�*/
		do
		{
			printf("\nPlayer %d,please enter the number of the square where you want to place your %c:",player,(player==1)?'X':'O');
			scanf("%d",&go);
			/*�ɼ���λ����ȷ���������еľ���λ�ã�����row���Լ����ٽ��м��㣡*/
			row=--go/3;
			column=go%3;
		}while(go<0||go>9||board[row][column]>'9');
		/*�Ը÷�����ȷ���������x��o��������*/
		board[row][column]=(player==1)?'X':'O';
		/*���һ���Ƿ��ʤ��if�������ж�б�߳����������else���жϺ��ݳ������*/
		if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
			winner=player;
		else
			for(line=0;line<=2;line++)
				if(board[line][0]==board[line][1]&&board[line][0]==board[line][2]||board[0][line]==board[1][line]&&board[0][line]==board[2][line])
			winner=player;
				/*��ѭ����winner���յ�ȡֵ1��2����ѭ��*/
	}
	printf("\n\n");
	/*���������Ӻ�����̸��*/
		printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);
		/*��������*/
		if(winner==0)
			printf("\nHow boring,it is a draw\n");
		else
			printf("\nCongratulations,player %d,YOU ARE WIN!\n",player);

}