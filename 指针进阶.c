#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
////----------------------------------2
//
//void print1(int arr[3][5], int x, int y)
//{
//	int i,j;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ",arr[i][j]);
//			printf("%d ",*(arr[i]+j));
//			//arr[i]�ǵ�i�е���Ԫ�ص�ַ��Ԫ��arr[i][0]����i�пɿ���һ��һά����
//		}
//		printf("\n");
//	}
//}
//void print2(int arr[], int n)
//{
//	int i = 0;
//	for(; i<n; i++)
//	{
//		printf("%d ",*(arr+i));//�����arr������Ϊָ��
//	}
//}
//
//void print3(int (*p)[5], int x ,int y)
//{
//	//����ָ��ָ��ÿһ�е�һά����,5��������ָ��ָ���һά���飬��5��Ԫ�أ���һ����5��Ԫ��
//	int i,j;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ",*(*(p+i)+j));
//				//*(p+i)  == p[i]
//			//printf("%d ",(*(p+i))[j]);
//			printf("%d ",p[i][j]);
//			//pָ��ÿһ��һά�������Ԫ�ص�ַ��p+iָ���i��һά�������Ԫ�ص�ַ
//			//*��p+j���ҵ�ÿһ��===arr
//			//*��p+i��+j �����ҵ�ÿһ�е�һά����ĸ���Ԫ�صĵ�ַ
//			//*(*(p+i)+j)��������ÿһ�е�һά�����Ԫ��
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	int arr2[4] = {1,2,3,4};
//	//print1(arr,3,5);//arr�Ƕ�ά������Ԫ�صĵ�ַ����ʱҪ�Ѷ�ά���飨���зֿ���������һά����
//	//ÿһ�п���һ��Ԫ�أ����һ��һά����
//	//print2(arr2,4);//arr2��һά������Ԫ�صĵ�ַ����Ԫ��1�ĵ�ַ
//	//��������ָ��
//	printf("\n");
//	print3(arr,3,5);
//	return 0;
//}

//----------------------------------2
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for(; i<3; i++)
//	{
//		int j = 0;
//		for(; j<5; j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//----------------------------------1
//int main()
//{
//	char arr[] = "asdfghj";
//	char* pc = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	return 0;
//}
 
//int main()
//{
//	const char* pa = "qwertyuio";//�Ѹó����ַ����׵�ַ(����һ���ַ�)����ָ��pa--����const
//	//*pa = 'w';//error�δ���
//	printf("%s\n",pa);
//	printf("%c\n",*pa);
//	return 0;
//}