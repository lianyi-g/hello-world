#define _CRT_SECURE_NO_WARNINGS 1

//sizeof�������/������ռ�ڴ�Ĵ�Сһ���Ǵ��ڵ���0�ģ�Ϊ�޷�����
//��������λ�ͻ�����-������ʽһ���������ʽ��ͬ����sizeof��i����i�Ǹ���ʱ�������޷���������ֵ����

//------------------------2 �������������ֵ
//#include <stdio.h>
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int i = 0;
//	printf("����ǰ��Ԫ�أ�\n");
//	PrintArr(arr1,sz);
//	PrintArr(arr2,sz);
//	for(i=0; i<sz; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("�������Ԫ�أ�\n");
//	PrintArr(arr1,sz);
//	PrintArr(arr2,sz);
//	return 0;
//}

//------------------------1
//#include <stdio.h>
//void InitArr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void ReverseArr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while(left<=right)
//	{
//		
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr1[10] = {0};
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	InitArr(arr1,sz);
//	printf("����ǰ��Ԫ�أ�\n");
//	PrintArr(arr1,sz);
//	ReverseArr(arr1,sz);
//	printf("�������Ԫ�أ�\n");
//	PrintArr(arr1,sz);
//	return 0;
//}