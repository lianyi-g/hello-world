#define _CRT_SECURE_NO_WARNINGS 1

//--------------6 ��������
#include<stdio.h>

#include"add.h"//�����Զ���ͷ�ļ���ʹ��˫����

int main()
{
	int a = 1;
	int b = 2;
	int sum = Add(a,b);
	printf("sum=%d\n",sum);
	return 0;
}

//----------===5 ��ʽ����

//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
////  ִ��˳���        ��             �٣���printf�����з���ֵ���������ӡ���ַ�����
////  �ٴ�ӡ 43  Ȼ�󷵻�ֵ2��Ϊ��������ӡ2����֮���Ƿ���ֵ1��Ϊ��������ӡ1
//	return 0;
//}

//-----------4����ÿ����һ��num+1
//#include<stdio.h>
//
//void Addone(int* x)
//{
//	(*x)++;//���������ȼ���*���Ÿߣ���Ӧ�ü�������.*x ���� num��ֵ
//}
//int main()
//{
//	int num = 0;
//	printf("Please input a int num:\n");
//	scanf("%d",&num);
//	printf("��������ǰ����Ϊ��%d\n",num);
//	Addone(&num);
//	printf("�������ú����Ϊ��%d\n",num);
//	return 0;
//}


//-----------3����ʵ������������ֲ���
//#include<stdio.h>
//         //�����a[],��������һ��ָ�룬
//int Half(int a[], int k, int sz)
//{
//	int left,right,mid;
//	left = 0;
//	right = sz -1;
//	//right = sizeof(a)/sizeof(a[0]) - 1;//������ں����ڲ��޷���ȷ���������С,�ʵ���λ��,����main��
//	//ָ����32λϵͳλ4�ֽڣ�intҲΪ���ֽڣ���right = 0
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(a[mid]>k)
//			right = mid -1;
//		else if(a[mid]<k)		
//			left = mid + 1;
//		else 
//			return mid;
//	}
//	return -1;
//		
//}
//int main()
//{
//	//�������ҳɹ������±꣬���򷵻�-1
//	int arr[] = {1,2,3,4,5,6,7,7,88,90};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = Half(arr, 4,sz);//arr������������Ԫ�صĵ�ַ
//	if(-1==ret)
//		printf("����ʧ�ܣ����������ڣ�\n");
//	else
//		printf("���ҳɹ����±�Ϊ��%d\n",ret);
//	return 0;
//}

//------------------------------------------�������澡����Ҫ�ô�ӡ��䣬���÷���ֵ�ȽϺã�����ֲ��ǿ
////-----------2����ʵ���ж�����
//#include<stdio.h>
//
//void Runnian(int x)
//{
//	if(x%4==0 && x%100!=0)
//		printf("���������꣡\n");
//	else if(x%400==0)
//		printf("���������꣡\n");
//	else
//		printf("���겻�����꣡\n");
//}
//int main()
//{
//	int year = 0;
//	printf("������Ҫ�жϵ���� ��\n");
//	scanf("%d",&year);	
//	Runnian(year);
//	return 0;
//}

//-----------1�����ж�����
//#include<stdio.h>
//#include<math.h>
//
//void Sushu(int x)
//{
//	int y = 0;
//	for(y=2; y<=sqrt(1.0*x); y++)
//	{
//		if(x%y==0)
//		{
//			printf("��������������\n");
//			break;
//		}
//	}
//	if(y>sqrt(1.0*x))
//		printf("������������\n");
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("������Ҫ�жϵ�������\n");
//	scanf("%d",&i);
//	Sushu(i);			
//	return 0;
//}