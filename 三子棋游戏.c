#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"
//��Ϸ�������㷨ʵ��
void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisPlayBoard(board, ROW, COL);
}

void menu()
{
	printf("****************************\n");
	printf("*****1.play     0.exit******\n");
	printf("  ����������ѡ��ʼ��Ϸ��  \n");
}
void test()
{
	int n = 0;//�������ñ�����Χ
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	}while(n);
}
int main()
{
	test();
	return 0;
}