//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////-------------------3
////������
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	//��ָ����һЩ����£�������Ϊʵ��
//	str = GetMemory(str);//�����뵽�Ŀռ�ʼ��ַ���أ�����ҵ����ڴ�ռ�
//	strcpy(str,"Hello world!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//-------------------2 
//��һ��ָ����� p������ֵΪ 0X11A�����õ��ڱ��� c �ĵ�ַ��
//����������Ǿͳ� p ָ���� c������˵ p ��ָ����� c ��ָ�롣
//*p ��ʾ��ȡ��ַ 0X11A �ϵ�����

//������
//void GetMemory(char** p)//һ��ָ������ĵ�ַ���ɶ���ָ����ά��������ָ��pָ��str���ڵ��ڴ��ַ
//{
//	*p = (char*)malloc(100);//�Զ���ָ������ã��õ�pָ������-str�ĵ�ַ�ռ䣬����ȡ��str�洢������
//	//*p = (char*)malloc(100)ʹstrָ�������ŵ�����--��ַ��������뵽���ڴ����ʼ��ַ��
//	//��ʱstr��ָ���� ���뵽���ڴ����ʼ��ַ��
//}

//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//������Ӧ��ʹ�ô�ַ���ã���ָ�����str�ĵ�ַ��
//	strcpy(str,"Hello world!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//-------------error���� ������
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	//��ָ����һЩ����£�������Ϊʵ��
//	GetMemory(str);//��1��error
//	//������ֱ������Ϊָ�����������ֵ���ݣ�GetMemory�������β�p�����һ����ʱ����
//	//GetMemory����������p���٣��������ڴ��޷����ҵ�����ʹ������free����,Ҳ������ڴ�й©
//	strcpy(str,"Hello world!");//��Ϊ��1������£�str��ʱ��Ȼ�ǿ�ָ��
//    //������ɷǷ����ʿ�ָ��
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}