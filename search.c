#define _CRT_SECURE_NO_WARNINGS 1

////-----------------2
//#include<stdio.h>
////���ַ�����
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,8,9,10,11};
//	int k = 4;
//	int mid = 0;
//	int left = 0;
//	int right = 0;
//	right = sizeof(arr)/sizeof(arr[0])-1;
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(arr[mid]>k)
//			right = mid - 1;
//		else if(arr[mid]<k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ����±��ǣ�%d\n",mid);
//			break;
//		}		
//	}
//	if(left>right)
//		printf("����ʧ�ܣ����������ڣ�\n");
//	return 0;
//}
////-----------------1
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int size = 0;
//	int arr[] = {2,3,5,6,9,30};
//	size = sizeof(arr)/sizeof(arr[0]);
//	printf("������Ҫ���ҵ���\n");
//	scanf("%d",&num);
//	for(; i<size; i++)
//	{
//		if(num==arr[i])
//			printf("���ҳɹ�\n");
//	/*	if(i<5)
//			continue;
//		printf("����ʧ�ܣ�����������\n");	*/
//	}
//	if(size == i)
//		printf("����ʧ�ܣ�����������\n");
//	return 0;
//}