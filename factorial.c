#define _CRT_SECURE_NO_WARNINGS 1

////----------------------4
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;	
//	int num = 1;
//	int sum = 0;
//	for(i=1; i<=4; i++)
//	{
//		//�Ż�
//		num = num * i;
//		sum = sum + num;//sum = sum + num * i--error
//
//
//		/*int num = 1;
//		for(j=1; j<=i; j++)
//			num = num * j;
//		sum = sum + num;*/
//	}
//	printf("%d\n",sum);
//	return 0;
//}

////----------------------3
//#include<stdio.h>
//
//int factr(int i)
//{
//	if(1==i||0==i)
//		return 1;
//	else
//		return i*factr(i-1);
//
//}
//int main()
//{
//	int j = 0;
//	int sum = 0;
//	for(j=1; j<=10; j++)
//		sum+=factr(j);
//	printf("1-%d�Ľ׳�֮��Ϊ��%d\n",j-1,sum);
//	return 0;
//}

////----------------------2
//#include<stdio.h>
//
//int factr(int i)
//{
//	if(1==i||0==i)
//		return 1;
//	else
//		return i*factr(i-1);
//
//}
//
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	printf("������Ҫ����Ľ׳�����\n");
//	scanf("%d",&num);
//	sum = factr(num);
//	printf("�׳˼�����Ϊ��%d\n",sum);
//	return 0;
//}

////----------------------1
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int num = 0;
//	printf("������Ҫ����Ľ׳�����\n");
//	scanf("%d",&num);
//	if(0==num)
//		printf("�׳˼�����Ϊ��%d\n",i+1);
//	else
//	{
//		for(i=1 ;i<=num ;i++)
//			sum*=i;
//		printf("�׳˼�����Ϊ��%d\n",sum);
//	}
//	return 0;
//}