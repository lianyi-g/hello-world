//#define _CRT_SECURE_NO_WARNINGS 1
////
//
//
////---------------------3
//#include <stdio.h>
//int main()
//{
//	char ch;
//	//int pos;
//	FILE* pf = fopen("test2.txt","r");
//	if(pf==NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//		
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//---------------------2
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	//int pos;
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//		return 0;
//	//��λ�ļ�ָ��
//	//fseek(pf,3,SEEK_SET);
//	//��ȡ�ļ�
//	//pos = ftell(pf);
//	//printf("%d\n",pos);
//
//	ch = fgetc(pf);
//	printf("%c\n",ch);
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n",ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//---------------------1
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//		return 0;
//	//��λ�ļ�ָ��
//	fseek(pf,3,SEEK_SET);
//	//��ȡ�ļ�
//	ch = fgetc(pf);
//	printf("%c\n",ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


