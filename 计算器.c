//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////----------------------------------------2 ���ûص�����
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.Add      2.Sub *****\n");
//	printf("*****3.Mul      3.Div *****\n");
//	printf("*****5.Xor      0.exit ****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int (*pf)(int ,int))//����ָ��
//{
//	int x,y;
//	printf("����������������:>");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));		
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳���\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}			
//	}while(input);
//	return 0;
//}

//----------------------------------------1 ���ú���ָ������
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.Add      2.Sub *****\n");
//	printf("*****3.Mul      3.Div *****\n");
//	printf("*****5.Xor      0.exit ****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input,x,y,ret;
//	int (*pfarr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};//����ָ������--ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		if(input>=1 && input <=5)
//		{
//			printf("����������������:>");
//			scanf("%d%d",&x,&y);
//			ret = pfarr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳���\n");
//		}
//		else
//			printf("ѡ�����\n");
//	}while(input);
//	return 0;
//}