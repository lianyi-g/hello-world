#define _CRT_SECURE_NO_WARNINGS 1

//-----------6
#include<stdio.h>

int main()
{
	int a =10;
	int *p = &a;
	//ָ����ר���������ַ�ı���
	printf("��ַ��:%p\n",&a);
	printf("��ַ��:%p\n",p);
	*p = 20;//* --ȡ��ַָ���ֵ����������÷�
	printf("ָ��pָ���ֵΪ��%d\n",a);
	return 0;
}



////-----------5
//#include<stdio.h>
////����ʹ���ⲿ��������static���κ���ʱ��Ҳ�Ǹı�����������--����⣬��׼ȷ��˵�Ǹı�������������
////������java�е�public->private
//extern int Add(int ,int);
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

////-----------4
//#include<stdio.h>
//int test()
//{
//	//Ϊ��̬�ֲ�����ʱ��static���ξֲ��������ֲ������������ڱ䳤����static����ȫ�ֱ���ʱ���ı����(��)
//	//ȫ�ֱ�����������--ʹ�þ�̬��ȫ�ֱ���ֻ�����䴴����Դ�ļ��ڲ�ʹ��
//	static int a = 1;
//	//int a = 1;
//	a++;
//	printf("a = %d\n",a);
//}
//
//int main()
//{
//	int i = 0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////-----------3
//#include<stdio.h>
//int main()
//{
//	int a = 20;//�ֲ�����==�Զ���������ǰ��ʡ����auto�ؼ���
//	//typedef ���Ͷ��壬��ֱ�����Ϊ������������
//	typedef unsigned int u_int;
//	return 0;
//}


////-----------2
//#include<stdio.h>
//
//int main()
//{
//	//����������--exp1?exp2:exp3  �����ʽexp1Ϊ��ʱ���������ʽ��ֵ���ڱ��ʽexp2��ֵ������Ϊexp3��ֵ
//	int a = 100;
//	int b = 29;
//	int max =(a>b?a:b);
//	printf("�ϴ�ֵ�ǣ�%d\n",max);
//	return 0;
//}

//-----------1
////�Լ��Լ�
//#include<stdio.h>
//
//int main()
//{
//	//ע���ӡ����λ��
//	int a = 10;
//	int b = a++;
//	int c = 5;
//	int d = ++c;
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	printf("c=%d\n",c);
//	printf("d=%d\n",d);
//	return 0;
//}