#define _CRT_SECURE_NO_WARNINGS 1

//---------2 �������-��1/1-1/2+1/3-1/4+.....+1/99+1/100
#include<stdio.h>

int main()
{
	int i = 0;
	int flag = 1;
	double sum = 0.0;
	double num = 1.0/100;
	printf("num=%lf\n",num);	
	for(i=1; i<=100; i++)//��--����flag���Ʒ���
	{
		
		sum = sum + (flag*1.0/i);
		flag = -flag;
	}

	/*for(i=1; i<=100; i++)//��
	{
		if(i%2==0)
			sum = sum - 1.0/i;
		else
			sum = sum + 1.0/i;
	}*/
	printf("sum = %lf\n",sum);
	return 0;
}

////---------1 ��ӡ1-100�����������ֶ��ٸ�����9
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=9; i<=99; i++)
//	{
//		/*if(((i%10)==9)||((i/10)%10==9))//--����д99������һ��
//		{
//			printf("%d ",i);
//			count++;
//		}*/
//		if((i%10)==9)
//		{
//			printf("%d ",i);
//			count++;
//		}
//		if((i/10)%10==9)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}