#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//��������Ԫ���׵�ַ��ֻ��һ����ַ��ֻռ�ĸ��ֽڣ�������������
	//1.sizeof����������-��������ʾ�������飬�������ʽ������� ���� ������ռ�ڴ�Ĵ�С����λ���ֽ�
	//2.&�������������������������飬���ʽȡ������ ���� ����ĵ�ַ
	int arr[] = {1,2,3,4,5};
	printf("%p\n",arr);
	printf("%p\n",&arr);
	printf("%p\n",&arr[0]);
	printf("%d\n",*arr);
	return 0;
}

//#include<stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	//��ȷ�������������
//	int i = 0;
//	for(; i<sz; i++)
//	{
//		//��ȷ��ÿ�αȽϵĴ���--ÿһ������
//		int j = 0;
//		//�Ż����������һ�˵�����û�з�������������
//		//��ʼ���ñ�־����Ϊ1����������
//		int flag = 1;
//		for(; j<sz-1-i; j++)
//		{
//			int temp = 0;
//			if(arr[j]>arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 0;//��־����������ȫ����
//			}
//		}
//		if(1==flag)
//			break;
//	}	
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	for(; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}