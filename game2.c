#define _CRT_SECURE_NO_WARNINGS 1


#include "game2.h"
//����ʵ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//ע��i j��λ��
	for(; i<row ;i++)
	{
		int j = 0;
		for(; j<col; j++)
			board[i][j] = ' ';
	}
}
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
	//int i = 0;
	//for(; i<row ; i++)
	//{
	//	//��ӡһ�е�����
	//	printf(" %c | %c | %c\n",board[i][0],board[i][1],board[i][2]);
	//	//��ӡ�ָ���
	//	if(i<row-1)
	//		printf("---|---|---\n");
	//	
	//}
	//�Ż�
	int i = 0;
	for(; i<row; i++)
	{
		int j = 0;
		for(; j<col; j++)
		{
			//��ӡһ�������е�����
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");	
		//��ӡһ�зָ���
		if(i<row-1)
		{
			for(j=0; j<col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
			
	}

}
void PlayerMOve(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�\n");
	while(1)
	{
		printf("���������꣺>\n");
		scanf("%d%d",&x,&y);
		//�ж�����Ӧ�Ǵ���ҵ�ϰ��˼ά����
		//if(x<row-1 && y<col-1)//����Ա˼ά
		if(x>=1 && x<=row && y>=1 && y<=col)	//���˼ά
		{
			if(board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}			
			else	
				printf("�����ѱ�ռ�ã��������������꣺>\n");	
		}
		else 
			printf("����Ƿ����������������꣡\n");
	}	
}

void CompterMOve(char board[ROW][COL], int row, int col)
{
	//����������꣬����rand����������������rand����Ҫ�ȵ���һ��srand������������ο���
	int x = 0;
	int y = 0;
	printf("�����ߣ�>\n");
	while(1)
	{
		x = rand() % row;
		y = rand() % col;
		if(board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}			
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//һ��Ԫ�����
	for(; i<row; i++)
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
			return board[i][0];
	}
	//һ��Ԫ�����
	for(; j<col; j++)
	{
		if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[0][j]!=' ')
			return board[0][j];
	}
	//���Խ������
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ')
		return board[0][0];
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
		return board[0][0];
	//ƽ��
	if(1==IsFull(board,ROW,COL))
		return 'TW';
	return 'C';
}

//����1����ʾ��������
//����0����ʾ����û��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for(; i<row; i++)
	{
		int j = 0;
		for(; j<col; j++)
		{
			if(board[i][j] ==' ')
				return 0;
		}
	}
	return 1;
}