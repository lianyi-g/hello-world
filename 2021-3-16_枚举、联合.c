//#define _CRT_SECURE_NO_WARNINGS 1

//----------------------------4 �������С�ļ���
//���ϵĴ�С����������Ա�����Ĵ�С
//������Ա��������������������ʱ��Ӧ���뵽����������������
//#include <stdio.h>
//
//union un
//{
//	int i;
//	char arr[5];
//	//�൱����������5��char���ͳ�Ա����
//};
//int main()
//{
//	union un u;
//	printf("%d\n",sizeof(u));//8
//	return 0;
//}

////--------------------------3 �����������жϴ�С��
//#include <stdio.h>
//
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	};
//	union un u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret;
//	ret = check_sys();
//	if(ret==1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

//--------------------------2 ������

//#include <stdio.h>
//
//union um//�����壨�����壩
//{
//	int i;
//	char c;
//};
//int main()
//{
//	//���ϳ�Աʹ�����ڴ�ռ�ģ���һ���������ͱ����Ĵ�С������������Ա�Ĵ�С
//	//���ϳ�Ա����ͬʱ����
//	union um u;
//	printf("%d\n",sizeof(u));
//	return 0;
//}
//--------------------------1 ö��
//#include <stdio.h>
//
//enum date//ö����������
//{
//	//�����ڲ���λö�ٳ���������ʱ�ſɸ�ֵ��������ֵ������ֵʱĬ�ϴ�0��ʼ����1Ϊ��λ����
// 
//	MON,//0
//	TUE,//1
//	WEN,//2
//	THR = 7,
//	FRI,//8������ֵ������������Ӧ����
//	SAT,//9
//	SUN
//};
//int main()
//{
//	enum date d = SAT;
//	printf("%d\n",sizeof(d));
//	//ö�����ͱ�������ȡֵ��������
//	return 0;
//}