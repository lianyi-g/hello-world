#define _CRT_SECURE_NO_WARNINGS 1

#include "ɨ��_game.h"

void game()
{
	//�洢������Ϣ
	char mine[ROWS][COLS] = {0};
	//�洢������Ϣ
	char show[ROWS][COLS] = {0};
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//�������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine,ROW,COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);
}

void menu()
{
	printf("***************************\n");
	printf("**********1 ��ʼ��Ϸ*******\n");
	printf("**********0 �˳���Ϸ*******\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����Ƿ������������룡\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}