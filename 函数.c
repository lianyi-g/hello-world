#define _CRT_SECURE_NO_WARNINGS 1

////-------------------4 ������������ 
//#include<stdio.h>
////��ʵ�δ����β�ʱ(�ǵ�ַ),�β�ʵ������ʵ�ε�һ��ֵ�Ŀ�����һ��ֵ�ľ��񣬶��βε��޸��ǲ���ı�ʵ�ε�
//
////void exchange(int x, int y)//�˺����޷�ʵ�ֽ�������Ϊ�����������βΣ�
////{
////	int temp = 0;
////	temp = x;
////	x = y;
////	y = temp;
////}
//void exchange(int* pa, int*pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please input two int:\n");
//	scanf("%d%d",&a,&b);
//	printf("����ǰa=%d,b=%d\n",a,b);
//	//exchange(a,b);//����ֵ����
//	//��������ʱһ�㶼��ʵ�Σ�����ִ��ʱ���䶨�����Ĳ���һ�����βΣ����˺�����Χ���βξ�ʧЧ�ˣ�������
//	exchange(&a,&b);//����ַ����
//	printf("������a=%d,b=%d\n",a,b);
//	return 0;
//}
////-------------------3 �Ƚ������ϴ�ֵ���� 
//#include<stdio.h>
//
//int bigger(int x, int y)
//{
//	if(x>y)
//		return x;
//	else 
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int big = 0;
//	printf("Please input two int:\n");
//	scanf("%d%d",&a,&b);
//	big = bigger(a,b);
//	printf("big==%d\n",big);
//	return 0;
//}


////------------------2 memset����
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = {"hello world"};
//	memset(arr, '*', 5);//''-�����Ŷ�Ӧ�ַ�,����˫���Ŷ�Ӧ�ַ���,�ַ��洢ʱ��������Ӧ��ASCII��ֵ-int
//	printf("%s\n",arr);
//	return 0;
//}

//------------------1 �����ַ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = {"bit"};
//	char arr2[] = {"#########"};
//	strcpy(arr2, arr1);//----�ַ���������Ҳ�Ḵ�ƹ�ȥ
//	printf("%s\n",arr2);
//	return 0;
//}