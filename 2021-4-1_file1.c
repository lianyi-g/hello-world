#define _CRT_SECURE_NO_WARNINGS 1

////----------------------3
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//int b = 11;
//	FILE* pfRead = fopen("test.txt","r");
//	if(pfRead==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	printf("%c",fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//	putchar('\n');
//	//printf("%c",b);
//	//printf("%d",b);
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

////----------------------2
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pfWrite = fopen("test.txt","w");
//	if(pfWrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputc('b',pfWrite);
//	fputc('i',pfWrite);
//	fputc('t',pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//----------------------1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//����·����б�ܱ�ʾ�Ļ�Ҫ��ֹ��ʶ��Ϊת���ַ�������������б��\\
//	//.  ��ʾ��ǰ·��
//	//.. ��ʾ��һ��Ŀ¼
//	//��wд��ʽ���ļ�ʱ����ԭ�ļ����ڣ��Ḳ��ԭ�ļ������ݣ��������ڣ���ֱ���½�
//	FILE* pf = fopen("test.txt","r");
//	//��rֻ����ʽ���ļ�������������ᱨ��
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}