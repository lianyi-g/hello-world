#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	char c = 'r';
//	int* p = &i;
//	char arr[10] = {0};
//
//	printf("%d\n",sizeof(i));
//
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(c));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(char [10]));
//	printf("%d\n",sizeof(char*));
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i=0;
//	printf("������һ��������\n",count);
//	scanf("%d",&num);
//	//
//	//while(num)//------�ٴ������⣬��������-1ʱ��������ȷ��ʾ���32��11111111111111111111111111111111��
//	//{
//	//	if(num%2==1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//	//������ѭ����λ��ÿ�������λ��00000000000000000000000000000001��λ�룬���(int)�������λ��ֵ
//
//	for(; i<32; i++)
//	{
//		if(num & 1)
//			count++;
//		num = num>>1;
//	}
//	printf("1�ĸ���Ϊ��%d\n",count);
//	return 0;
//}