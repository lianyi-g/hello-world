
#define ROW 3
#define COL 3

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisPlayBoard(char board[ROW][COL], int row, int col);
void PlayerMOve(char board[ROW][COL], int row, int col);
void CompterMOve(char board[ROW][COL], int row, int col);

//����win���ء�#��
//���win ���ء�*��
//ƽ�ַ��ء�TW��
//�������ء�C'
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);