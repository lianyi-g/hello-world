//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////------------------------------------3 ����ָ������
//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	char* (*pf)(char*,const char*) = my_strcpy;
//	char* (*pfarr[4])(char*,const char*) = {};
//	return 0;
//}

//------------------------------------2 
//void (* signal(int ,void(*)(int)) )(int);//����
////void (*  )(int)  signal(int ,void(*)(int));error��ԭ���Ƿ�������+������+�β�
//
////�򻯣�����������
//typedef void (*pfun_t)(int);//����
////typedef void (*)(int) pfun_t;error
//pfun_t signal(int, pfun_t);
//------------------------------------1
//void test(char* str)//�β�-�ַ�ָ��
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void (*p)(char*) = test;// ����ָ��
//	(*p)("hello world!");//ʵ�δ����ַ���
//	return 0;
//}