//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include "2021-3-20_dynamic-contact.h"
////#include <stdio.h>
//
//void menu()
//{
//	printf("***********************************\n");
//	printf("******1.add          2.delete******\n");
//	printf("******3.search       4.modify******\n");
//	printf("******5.show         6.sort********\n");
//	printf("******0.exit***********************\n");
//}
////����
//int main()
//{
//	int input;
//	//����ͨѶ¼
//	struct Contact con;
//	//��ʼ��ͨѶ¼
//	InitContact(&con);
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case ADD:
//			AddContact(&con);
//			break;
//		case DEL:
//			DelContact(&con);
//			break;
//		case SEARCH:
//			SearchContact(&con);
//			break;
//		case MODIFY:
//			ModifyContact(&con);
//			break;
//		case SHOW:
//			ShowContact(&con);
//			break;
//		case SORT:
//			SortContact(&con);
//			break;
//		case EXIT:
//			DestroyContact(&con);
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//	
//	return 0;
//}