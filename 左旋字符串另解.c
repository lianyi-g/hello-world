//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int is_left_move(char* str1,char* str2)
//{
//	char* ret;
//	//strcat(str1,str2)--��str2'\0'ǰ������׷�ӵ�str1'\0'�ĺ��棬���޷�׷������
//	//׷��������strncat
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1!=len2)
//		return 0;//���ַ������Ȳ���ʱ���ض�����Ϊ�����ַ���
//	//׷��
//	strncat(str1,str1,6);//"abcdefabcdef"
//	ret = strstr(str1,str2);
//	//�ж�str1���Ƿ���str2�������Ӵ������ҵ������Ӵ���Ԫ�صĵ�ַ�����򷵻�NULL
//	if(ret==NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}