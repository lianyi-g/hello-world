//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////#define MAX 1000
//#define DEFAULT_SZ 3
//#define MAX_NAME 20
//#define MAX_TELE 12
//#define MAX_ADDR 30
//#define MAX_SEX 5
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	DEL,//2
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};
//
//typedef struct PeoInfo//����һ�����ѵ���Ϣ
//{
//	char name[MAX_NAME];
//	char tele[MAX_TELE];
//	int age;
//	char sex[MAX_SEX];
//	char addr[MAX_ADDR];
//}PeoInfo;
////��������ͨѶ¼����Ϣ
//typedef struct Contact
//{
//	struct PeoInfo *data;//������̬����ͨѶ¼����
//	int size;//���еĺ�������
//	int capacity;//��ǰͨѶ¼���������
//}Contact;
////��������
////��ʼ��ͨѶ¼
//void InitContact(struct Contact* ps);
////����ָ����Ϣ
//void AddContact(struct Contact* ps);
////ɾ��ͨѶ¼��Ϣ
//void DelContact(struct Contact* ps);
////����ͨѶ¼��Ϣ
//void SearchContact(const struct Contact* ps);
////�޸�ͨѶ¼��Ϣ
//void ModifyContact(struct Contact* ps);
////չʾͨѶ¼��Ϣ
//void ShowContact(const struct Contact* ps);
////ͨѶ¼��Ϣ
//void SortContact(struct Contact* ps);
////����ͨѶ¼���ͷŶ�̬�ڴ�
//void DestroyContact(struct Contact* ps);