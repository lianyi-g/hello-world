#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)//�Ż���--ʹ��const����ֹ�޸ĵ�������ߵ�
//{
//	char* ret = dest;
//	assert(dest!=NULL);//ʹ�ö��ԣ�����Ϊ�棬��������ִ��
//	assert(src!=NULL);//����Ϊ��ʱ����ӡ��ʾ��Ϣ
//	while(*dest++ = *src++)//�Ƚ����ã��ٺ����Լ�--�����ַ�������\0��
//	{
//		;
//	}
//	return ret;//ʹ�ú��������ú������
//}

//void my_strcpy(char* dest, char* src)//�Ż���
//{
//	assert(dest!=NULL);//ʹ�ö��ԣ�����Ϊ�棬��������ִ��
//	assert(src!=NULL);//����Ϊ��ʱ����ӡ��ʾ��Ϣ
//	while(*dest++ = *src++)//�Ƚ����ã��ٺ����Լ�
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)//�Ż���
//{
//	if(dest!=NULL && src!=NULL)//��ֹ���ֿ�ָ�룬���޷���ʾ����
//	{
//		while(*dest++ = *src++)//�Ƚ����ã��ٺ����Լ�
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* dest, char* src)//�Ż���
//{
//	while(*dest++ = *src++)//�Ƚ����ã��ٺ����Լ�
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)//��
//{
//	while(*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//����\0
//}

//int main()
//{
//	char arr1[] = "#################";
//	char arr2[] = "bit";//��\0
//	//my_strcpy(NULL,arr2);
//	//printf("%s\n",arr1);
//	printf("%s\n",my_strcpy(arr1,arr2));//һ�������ķ���ֵ��Ϊ��һ�������Ĳ���--��������ʽ����
//	return 0;
//}