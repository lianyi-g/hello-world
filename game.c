#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
//����ʵ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(; i<row ;i++)
	{
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
		//��ӡ�ָ���
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