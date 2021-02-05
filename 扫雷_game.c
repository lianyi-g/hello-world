#define _CRT_SECURE_NO_WARNINGS 1


#include "ɨ��_game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for(; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for(i=0; i<=col; i++)
	{
		if(0==i)
			printf("  ");
		else
			printf("%d ",i);
	}
	printf("\n");

	for(i=1; i<=row; i++)
	{
		//��ӡ�к�
		printf("%d ",i);

		for(j=1; j<=col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int x = rand()%row + 1;//1-9
		int y = rand()%col + 1;
		if(board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
	
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x-1][y] + mine[x-1][y-1] +
		mine[x][y-1] + mine[x+1][y-1] +
		mine[x+1][y] + mine[x+1][y+1] +
		mine[x][y+1] + mine[x-1][y+1] -8*'0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row ,int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//������Ϸ��Ӯ��־
	while(win<row*col-EASY_COUNT)
	{
		printf("�����룺>");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if(mine[x][y]=='1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				break;
			}	
			else
			{
				//���������Χ�׵���Ϣ
				int count = get_mine_count(mine,x,y); 
				////�ݹ�չ������ɨ����Ϣ-
				////1.�����ף�2.��Χ�˸�����Ҳ��û���ף���ӡ�ɿո�
				//if(0==count)
				//{
				//	show[x][y] = '  ';
				//	FindMine(mine,show,ROW,COL);
				//}
				show[x][y] =count + '0';//�������ַ�������

				DisplayBoard(show,ROW,COL);
				//�ַ���0����= 0�������ַ���n�����ַ���0�����Ϊn��nΪ1-10
				win++;				
			}				
		}
		else
			printf("����Ƿ������������룡\n");
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("��ϲ�㣬�˴���������˳����ɣ�\n");
		DisplayBoard(mine,ROW,COL);
	}
		
}
