#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------4

//���ű��ʽ�����ö��Ÿ����Ķ�����ʽ�������������ִ�У����Ǳ��ʽ��������ı��ʽ����

//-------------------------3
//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	int max = 0;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	i = a++ && ++b && d++; //1 2 3 4
//	//ע���߼�������Ż��������߼����ʽ�Ѿ���ȷ������󣬺�������㲻��ִ�У�����a++���ʽ���Ϊ0
//	//i = a++ || ++b || d++; //1 3 3 4
//	printf("a = %d,b = %d,c = %d,d = %d\n",a,b,c,d);
//	max = (a>b?a:b);
//	printf("max=%d\n",max);
//	return 0;
//}

//-------------------------2
//#include <stdio.h>
//
//void test1(int arr1[])
//{
//	printf("%d\n",sizeof(arr1));//�� �ٺ͢��β���Ȼ������������,�������ﴫ������arrʵ���� ��Ԫ��  ��ַ��
//}
//void test2(char arr2[])
//{
//	printf("%d\n",sizeof(arr2));//�� ���Ƕ��൱��һ��ָ�룬��ָ���С���ֽڣ���һ̨������ǹ̶���
//}
//int main()
//{
//	int arr1[10] = {0};
//	char arr2[10] = {0};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//-------------------------1
//#include <stdio.h>
//
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a + 5));//sizeof����ı��ʽ��������Ľ�������
//	printf("%d\n",s);//��s��Ȼ��0
//}