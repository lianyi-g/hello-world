//#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------3

//#include <stdio.h>
//#include <stddef.h>
//struct S
//{
//	char c;//0
//	int i;//4
//	double d;//8
//};
//int main()
//{
//	//offsetof--����һ���꣬������ṹ��������ڴ��У�����������ṹ����ʼλ�õ�ƫ����
//	printf("%d\n",offsetof(struct S,c));//ע�������ǰ���ǽṹ���������������ǽṹ�������
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//
//	return 0;
//}

//-------------------------2

//#include <stdio.h>
////#pragma pack(4)//����Ĭ�϶�����
//struct S
//{
//	char c1;//1
//	double d;//8
//};
////#pragma pack()//��ԭ����
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//���ĺ�Ϊ12--//������Ϊ16
//	
//	return 0;
//}
//-------------------------1
//#include <stdio.h>
//
//struct S1
//{
//	char c1;
//	char c2;
//	int num;
//};
//struct S2 
//{
//	char c1;
//	int num;
//	char c2;	
//};
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//	printf("sizeof-s1==%d\n",sizeof(s1));//8
//	printf("sizeof-s2==%d\n",sizeof(s2));//12
//	printf("sizeof-double==%d\n",sizeof(double));
//
//	return 0;
//}