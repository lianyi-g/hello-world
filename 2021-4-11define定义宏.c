//#define _CRT_SECURE_NO_WARNINGS 1
//
////-------------------3
//#include <stdio.h>
//
//#define PRINT(X) printf("the value of "#X" is %d\n",X);
////��Xǰ����һ��#ʱ����˫����������ô����ᱻ�滻Ϊ��Ӧ���ַ�����������ֵ���滻
//int main()
//{
//	//�����ַ���ƴ�ӣ����������뵽�ַ�����
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n",a)
//	//"the value of a is %d\n",a)
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n",b)
//	return 0;
//}

//-------------------2
//#include <stdio.h>
//
//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	
//	
//	printf("MAX=%d\n",MAX);
//	//�ַ��������MAX�����ᱻ�滻
//
//	return 0;
//}
//-------------------1
//#include <stdio.h>
//
//#define SQUARE(X) X*X
//int main()
//{
//	int ret,ret2;
//	ret = SQUARE(5);
//	printf("%d\n",ret);
//
//	//�����滻�����Ǵ���
//	ret2 = SQUARE(5+1);// ret2 = 5+1*5+1 ==11,������6*6
//	printf("%d\n",ret2);
//	//Ϊ�˷�ֹĳЩ����µļ���˳����������ʱ����ã����÷��ų�Ϊһ������
//	//#define SQUARE(X) (X)*(X)
//	//#define SQUARE(X) ((X)+(X))
//
//
//	return 0;
//}