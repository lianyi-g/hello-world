#define _CRT_SECURE_NO_WARNINGS 1

//------------------2 ��ά����
//#include<stdio.h>
//
//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5};
//	int i = 0;
//	for(; i<3; i++)
//	{
//		int j = 0;
//		for(; j<4; j++)
//			printf("%d  ",arr1[i][j]);
//		printf("\n");
//	}
//
//	//char arr2[5][6] = {"2",'g'};
//	//int arr3[][4] = {6,7,8,9,10};//��ά�����кſ�ʡ�������кŲ���ʡ
//	//int arr4[] = {11,12,13,14,15};
//	return 0;
//}

//------------------1 һά����
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	//strlen sizeofû�й�����strlen�����ַ������ȵģ����ܵ�һ���ǿ⺯��
//	//��sizeof�������������顢������������ռ�ڴ�ռ�Ĵ�С����λ���ֽڣ���һ��������
//	char arr1[] = "abcd";//��˫���ų�ʼ�����ַ����飬����һ����\0��Ҳռ�ڴ�
//	char arr2[] = {'a','b','c','d'};
//	printf("sizeof = %d\n",sizeof(arr1));
//	printf("sizeof = %d\n",sizeof(arr2));
//	printf("strlen = %d\n",strlen(arr1));
//	printf("strlen = %d\n",strlen(arr2));//��ӡһ�����ֵ����Ϊ'\0'�޷���֪
//	//�ر�ע�⣬strlen����\0��ǰ����ַ�������ע�⡮\0��λ��
//	return 0;
//}