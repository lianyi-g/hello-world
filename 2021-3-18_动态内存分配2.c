//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////---------------------2 realloc
//
//int main()
//{
//	int i;
//	int *ptr;
//	int* p = (int*)malloc(5*sizeof(int));
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));//<string.h>
//	}
//	else
//	{
//		for(i=0; i<5; i++)
//		{
//			*(p+i) = i;
//			printf("%d ",*(p+i));
//		}
//	}
//	putchar('\n');
//	//-----------��ʱ���ÿռ��С���ʺϣ�ʹ��realloc����
//	ptr = (int*)realloc(p,10*sizeof(int));
//	if(ptr!=NULL)//��ֹ�����ڴ�ʧ�ܣ���ʧԭ������
//	{
//		p = ptr;
//		for(i=0; i<10; i++)
//		{
//			*(p+i) = i;
//			printf("%d ",*(p+i));
//		}
//	}
//	free(p);
//	//�ͷŵ��ù�realloc������ָ�룬�����ָ���֮ǰmallocָ����ָ��ַ��һ�£�
//	//���߻��Զ���realloc����free��
//	p = NULL;
//	return 0;
//}
//---------------------1 calloc
//int main()
//{
//	int i;
//	int* p = (int*)calloc(10,sizeof(int));
//	//ǰһ���������������������һ�������������ÿ��Ԫ�صĴ�С-�ֽ�,���ʼ��Ԫ��Ϊ0
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		for(i=0; i<10; i++)
//			printf("%d ",*(p+i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}