//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////------------------------------��
//void move(int arr[],int sz)
//{
//	//������������ָʾ�±꣬�������ż�������ұ�������
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)//ʹ����ͣ����
//	{
//		//�������ż��
//		while(left<right && arr[left]%2==1)//��ֹȫ������
//		{
//			left++;
//		}
//		//���ұ�������
//		while(left<right && arr[right]%2==0)//��ֹȫ��ż��
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
////------------------------------��
////void move(int arr[],int sz)
////{
////	int i;
////	for(i=0; i<sz; i++)
////	{
////		if(arr[i]%2==0)//�ҵ�ż��
////		{
////			int j = i;
////			for(; j<sz; j++)
////			{
////				if(arr[j]%2)//�ͺ������������
////				{
////					int tmp;
////					tmp = arr[j];
////					arr[j] = arr[i];
////					arr[i] = tmp;
////				}
////			}
////		}
////	}
////}
//void print(int arr[],int sz)
//{
//	int i;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//��������ʹ����ȫ��λ��ż��ǰ��
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}