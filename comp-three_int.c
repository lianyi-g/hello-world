//#define _CRT_SECURE_NO_WARNINGS 1
//
////-----------------------5��ӡ����--�Գ���
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//for(i=100; i<=200; i++)
//	for(i=101; i<200; i+=2)//--ż�������������������Ż�
//	{
//		//--���ۣ�i=a*b����ôa��b��������һ������<= ��ƽ��i��
//		//for(j=2; j<i; j++)
//		//for(j=2; j<=sqrt(i*1.0); j++)//��ʹ�ÿ�ƽ������������Ҫע��sqrt������������Ӧ��double��float��
//		for(j=2; j<i/2; j++)//��ʹ��ֵ��һ�룬�Ż��㷨����i��ƽ����Ȼ��<=i/2��
//		{
//			if(i%j==0)
//				break;
//		}
//		//if(j==i)
//		//if(j>sqrt(i*1.0))
//		if(j==i/2)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n�������У�%d����\n",count);
//	return 0;
//}

////-----------------------4��ӡ����
//#include<stdio.h>
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	//printf("��������ݣ�\n");
//	//scanf("%d",&y);
//	for(y=1000; y<=2000; y++)
//	{
//		//�ܱ�4�����������ܱ�100�����������ܱ�400����Ϊ����
//		if((y%100!=0 && y%4==0) || y%400==0)
//		{
//			printf("%d�����꣡   ",y);
//			count++;
//		}
//	}
//	printf("������������%d\n",count);
//	return 0;
//}

//-----------------------3
//#include<stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("������Ҫ�����Լ������������\n");
//	scanf("%d%d",&m,&n);
//	while(r = m%n)
//	{
//		//շת�����
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}
//-----------------------2
//#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}

//-----------------------1
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������Ҫ�Ƚϵ�3��������\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		int temp = 0;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if(a>c)
//	{
//		int temp = 0;
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if(b>c)
//	{
//		int temp = 0;
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("�ȽϽ����С����Ϊ:%d %d %d ",a,b,c);		
//	return 0;
//}