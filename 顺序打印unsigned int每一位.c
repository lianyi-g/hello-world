#define _CRT_SECURE_NO_WARNINGS 1

//-------------------2 �Զ����ַ������ȼ��㺯��

//#include<stdio.h>

//int my_strlen(char* str)//ѭ��
//{
//	int count = 0;
//	while(*str!='\0')
//	{
//		str++;
//		count++;
//	}
//	return count;	
//}

//�������ڲ�����������ʱ����ʱ�����õݹ�ʵ��
//
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = {"hello"};
//	int len = my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}


//-------------------1 �ݹ��ӡ
//#include<stdio.h>
//
//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ",n%10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}