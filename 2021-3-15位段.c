//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////----------------------2
//struct T
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct T t;
//	printf("%d\n",sizeof(t));//
//	return 0;
//}

//----------------------1
//struct S
//{
//	//λ�κͽṹ�嶨�����ƣ��������������һ��
//	//һ��ʱint,unsiged int ,signed int,char����Ҳ�������μ��壩
//	//����λ�ε�����ʱΪ�˽�ʡ�ռ䣬�����漰���ܶ಻ȷ���ԣ����߱���ƽ̨��
//	int a:2;//��ʾa��Ȼʱint���ͣ�����ֻռ2��bitλ
//	int b:5;
//	int c:10;//λ�ο����ڴ�Ĺ�����������٣�����ʱ���Ż��ٴο���
//	int d:30;//һ��һ����һ��int��С(4�ֽ�)������char����ʱ��һ��char��С(1�ֽ�)
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//8���ֽ�
//	return 0;
//}