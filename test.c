#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main()
{
	//&��λ��
	//|��λ��
	//^��λ�����ͬΪ1����ͬΪ0
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while(i<10)
	{
		printf("%d\t",arr[i]);
		i++;
	}
	return 0;
}

//int Add(int x,int y)
//{
//	int sum = 0;
//	return sum = x+y;
//}
//
//int main()
//{
//	int a = 19;
//	int b = 23;
//	int sum = 0;
//	sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("��Ҫѧϰ��");
//	while(line<=20000)
//	{
//		printf("������:��%d����Ч����\n",line);
//		line++;
//	}
//	if(line>20000)
//		printf("�����ҿ����и���offer!\n");
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������ǣ�\n");
//	printf("��Ҫ�ú�ѧϰ��>(1/0):\n");
//	scanf("%d",&input);
//	if(input==1)
//		printf("һ����offer!\n");
//	else
//		printf("�ؼ�������!\n");
//	return 0;
//}


//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	//\ddd��1~3���˽������֣�Ϊת��˽��ƣ�\xdd��2�����������֣�Ϊת��ʮ�����ƣ�ת���ַ����忴��һ���ַ�
//	printf("%c\n",'\132');
//	printf("%c\n",'\32');
//	//��ӡ���ǰ˽��ƶ�Ӧ��ʮ������ֵ�� ASCII��ֵ��Ӧ���ַ�
//	printf("%c\n",'\x61');
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = {'a','b','c','d','\0'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = {'a','b','c','d','\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum SEX s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

////define�����ʶ��������const���峣�������䱾����Ȼ�Ǳ���
//#define MAX 100
//int main()
//{
//	int arr[MAX] = {0};
//	return 0;
//}

//int main()
//{
//	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d",&num1,&num2);
//	printf("sum=%d\n",num1+num2);
//	return 0;
//}