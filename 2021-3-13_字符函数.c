//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
////-------------------------------2 ������ʾ����
//
//int main()
//{
//	//FILE* pf = fopen("test.txt","w");//��д��ʽ�򿪣���û�и��ļ����ᴴ��һ��
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//		printf("%s\n",strerror(errno));
//	else
//		printf("open file success!\n");
//}

////-------------------------------1 //�ƻ����ַ����ָ��
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char* ret;
////	int count =0;
////	char arr[] = "123@234.@345";
////	char* p = "@.";
////
////	char buf[1024] = {0};
////	strcpy(buf,arr);
////	for(ret = strtok(buf,p);ret!=NULL;ret=strtok(NULL,p))
////	{
////		printf("%s\n",ret);
////		count++;
////	}
////	return 0;
////}