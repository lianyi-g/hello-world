#define _CRT_SECURE_NO_WARNINGS 1

//------------------3 ָ������--���ָ�������

#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int i = 0;
	//int arr[3] --��������
	int* arr[3] = {&a,&b,&c};//ָ������
	for(i=0; i<3; i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
}

//------------------2 ����ָ��
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//����ָ��
//	int** * pppa = &ppa;
//
//	**ppa = 20;//===*pa
//	printf("%d\n",a);
//	printf("%d\n",*pa);
//	return 0;
//}


//------------------1
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%p  =========   %p\n",p+i,&arr[i]);
//	}
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//		printf("%d ",*(p+i));
//	}
//	printf("\n");
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}