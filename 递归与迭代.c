#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////int fib(int x)//ʹ�õݹ�Ч�ʹ��ڵ���ʱ��Ӧ��ȡ���� ѭ���ķ�ʽ
////{
////	if(x==1||x==2)
////		return 1;
////	else
////		return fib(x-1)+fib(x-2);
////}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;//Ҫ��ѭ����ֹ����
//	}
//	return c;
//}
//
//int main()
//{
//	int x = 0;
//	int ret = 0;
//	printf("Please input a num:\n");
//	scanf("%d",&x);
//	ret = fib(x);
//	printf("fib(%d)=%d\n",x,ret);
//	return 0;
//	//TDD������������
//}