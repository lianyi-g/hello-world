#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_SEX 5

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo//����һ�����ѵ���Ϣ
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
};
//��������ͨѶ¼����Ϣ
struct Contact
{
	struct PeoInfo data[MAX];
	int size;//���еĺ�������
};
//��������

void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);