//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[0];
//	//[]�տ��Բ��趨ֵ��Ҳ������Ϊ0-���������Ա-����Ĵ�С�ǿ��Ե�����
//	//�������飬�ô��������ͷ��ڴ棬ֻ��Ҫ����һ���ڴ棻�ڴ�����������ʣ������ٶȿ죩��
//	//ͬʱ���Լ����ڴ���Ƭ
//};
//int main()
//{
//	int i = 0;
//	struct S* ptr;
//	//struct S s;
//	//printf("%d\n",sizeof(s));//4,����������Ĵ�С
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	ps->n = 100;
//	for(i=0; i<5; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ",ps->arr[i]);
//	}
//	ptr = (struct S*)realloc(ps,44);
//	if(ptr!=NULL)
//	{
//		ps = ptr;
//		for(i=0; i<10; i++)
//		{
//			ps->arr[i] = i;
//			printf("%d ",ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}