//#define _CRT_SECURE_NO_WARNINGS 1
//
////--------------------------3 �ڴ�����
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char ch[10] = "";
//	int arr[10] = {0};
//	memset(ch,'\n',10);//extern void *memset(void *buffer, int c, int count) 
//	memset(ch,'\0',10);//' '��'\0'��ASCII��ֵ��Ϊ0
//
//	memset(ch,10,10);
//	memset(ch,0,10);
//
//
//	memset(ch,'@',10);
//	memset(arr,' ',40);//��λ���ֽ�
//	memset(arr,1,40);
//	memset(arr,0,40);
//	memset(arr,'\0',40);
//	return 0;
//}


//--------------------------2 �ڴ�Ƚ� 
//#include <stdio.h>
//
//#include <string.h>
//int main()
//{
//	int ret1,ret2,ret3;
//	int arr1[] = {1,2,3,6,6};
//	int arr2[] = {1,2,3,5,3};
//	ret1 = memcmp(arr1,arr2,12);//���ֽ�Ϊ��λ,���ص�һ������ȵ��ֽڴ�������1�ַ�-����2�ַ���ֵ��
//	printf("ret1==%d\n",ret1);
//	ret2 = memcmp(arr1,arr2,13);//���Ϊ0������1�ַ�>����2�ַ�-��������֮����
//	printf("ret2==%d\n",ret2);
//	ret3 = memcmp(arr1,arr2,17);
//	printf("ret3==%d\n",ret3);
//	return 0;
//}

//--------------------------1 �ڴ濽��
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////��C���Ա�־�в�Ҫ��ʵ�����ص�����Ŀ�������vs2010&vs2013�⺯����memcpyʵ�����ص�����Ŀ���
//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//		//src++;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest,const void* src,size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while(count--)
//		{
//			if(dest>=src && (char*)dest<=(char*)src+count)
//			{
//				*((char*)dest + count)= *((char*)src + count);
//			}
//			else
//			{
//				*(char*)dest = *(char*)src;
//				++(char*)dest;
//				++(char*)src;
//			}
//		}
//	return ret;
//}
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = {1,3,2,3,5};
//	int arr2[5] = {0};
//	int arr5[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr6[20] = {0};
//	struct s arr3[] = {{"����",22},{"����",34}};
//	struct s arr4[3] = {0};
//	my_memmove(arr5+2,arr5,20);
//	my_memmove(arr6,arr1,sizeof(arr1));
//	my_memcpy(arr4,arr3,sizeof(arr3));
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}