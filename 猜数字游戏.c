#define _CRT_SECURE_NO_WARNINGS 1
////---------------1 �����������ģ���������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	//RAND_MAX--32767��rand��������0-32767֮�������
//	//ʹ��ʱ������䵱srand��Ҫ�����������--��Ϊ��������������ʼ��
//	//time(time* timer)��������ֵ����Ϊtime_t--����һ��long int����ȡϵͳʱ�䣬ͷ�ļ�Ϊtime.h
//	//����1-100֮����������
//	int ret = 0;
//	ret = rand()%100+1;
//	while(1)
//	{
//		int k = 0;
//		printf("������֣�\n");
//		scanf("%d",&k);
//		if(k>ret)
//			printf("�´��ˣ�\n");
//		else if(k<ret)
//			printf("��С�ˣ�\n");
//		else
//		{
//			printf("��ϲ���¶��ˣ�\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("*****1.play****0.exit*****\n");
//	printf("**************************\n");
//}
//int main()
//{
//	
//	//rand();
//	int num = 0;
//	srand((unsigned int)time(NULL));//ֻ����һ�Σ����������������ʼ��
//	do
//	{		
//		menu();
//		printf("�������ֿ�ʼ��Ϸ\n");
//		scanf("%d",&num);
//		switch(num)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������룺\n");
//			break;
//		}
//
//	}while(num);
//	return 0;
//}