//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	//C���Թ涨�ַ��������ݺ���������֮�����ͨ��
//	int i;
//	//����10��int��С�Ŀռ�
//	int* p = (int*)malloc(10*sizeof(int));//<stdlib.h> ����ɹ�����ַ��ָ��pά��
//	//int* p = (int*)malloc(INT_MAX);//����ʧ��
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));//<string.h>
//	}
//	else
//	{
//		for(i=0; i<10; i++)
//		{
//			*(p+i) = i;
//			printf("%d ",*(p+i));
//		}
//	}
//	//free�����������ͷŶ�̬���ٵ��ڴ�ռ䣬������ʵʱ��
//	free(p);
//	//printf("%d\n",p);
//	p = NULL;//��ֹ�ռ䱻�Ƿ�����
//	
//	return 0;
//}