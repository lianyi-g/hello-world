//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//��������

//----------------3
//#define DEBUG 
//int main()
//{
//	//��
//#if defined(DEBUG)
//	printf("hello\n");
//#endif
//	//��
//#ifdef DEBUG 
//	printf("hello\n");
//#endif
//	//�ٺ͢��ǵȼ۵�
//	//��
//#if !defined(DEBUG)
//	printf("hi\n");
//#endif
//	//��
//#ifndef DEBUG 
//	printf("hi\n");
//#endif
//	//�ۺ͢�Ҳ�ǵȼ۵�
//	return 0;
//}

//----------------2
//int main()
//{
//#if 1==1
//	printf("hi\n");
//#elif 2==1
//	printf("hello\n");
//#else
//	printf("���\n");
//#endif
//	return 0;
//}
//----------------1
//#define DEBUG  //�иú궨��ʱ������Ĵ�ӡ���Ż�ִ�� 
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ",arr[i]);
//#endif
//	}
//	return 0;
//}