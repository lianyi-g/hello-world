//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i,j;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;//ȥ���ո�ʱ�ĵ�һ��
//			else if(i==j)
//				arr[i][j] = 1;//ȥ���ո�ʱ�ĶԽ���
//			else
//				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//		}
//	}
//	//��ӡ���
//	for(i=0; i<10; i++)
//	{
//		//���Ͽո�
//		for(j=0; j<10-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ����
//		for(j=0; j<=i; j++)
//		{
//			printf("%-4d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}