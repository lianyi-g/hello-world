//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
////-------------------4
////��Ȼ�ֲ����������٣����Ƕ�̬������ڴ��ڶ�����δ������
//int* test()
//{
//	int* str = (int*)malloc(40);
//	return str;
//}
//int main()
//{
//	int* ptr;
//	ptr = test();
//	*ptr = 100;
//	printf("%d\n",*ptr);
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//-------------------3
//char* test()//error
//{
//	char ch[] = "hello";
//	return ch;
//}
//int main()
//{
//	char* p = test();
//	//�Ƿ�����ջ�ռ��ַ����ӡ���ֵ
//	printf(p);
//	return 0;
//}
//-------------------2
//int* test()
//{
//	//int a = 10;//error
//	//�ֲ�������ջ�����������������󣬱����������ڿռ�ᱻ����
//	//�޸ĳ�static���Σ��ӳ�������������,�������ڸú���֮�ⱻ����
//	static int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//����ջ�ռ��ַ
//	//����ɷǷ������ڴ棬
//	printf("%d\n",*p);
//	*p = 20;
//	printf("%d\n",*p);
//	return 0;
//}

//-------------------1
//int main()
//{
//	char* p;
//	char a[] = "hello world";
//	p = a;
//	printf(p);
//	return 0;
//}