#define _CRT_SECURE_NO_WARNINGS 1

//----------------------3
//#include <stdio.h>
//
//int main()
//{
//	//1��2�ȼ۶��Ǵӱ�׼��������ȡ�����������׼�����
//	char buf[1024] = {0};
//	//1
//	fgets(buf,1024,stdin);
//	fputs(buf,stdout);
//	//2
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//----------------------2
//#include <stdio.h>
//
//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//д�ļ� �����뺯��
//	fputs("hello\n",pf);
//	fputs("������������\n",pf);
//
//	fputs("world\n",pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//----------------------1
//#include <stdio.h>
//
//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
	//���ļ�
//	fgets(buf,1024,pf);
//	printf("%s",buf);//��������'\n'���з�����buf����Ҳ��һ��洢
//	fgets(buf,1024,pf);
//	printf("%s",buf);
//	fgets(buf,1024,pf);
//	printf("%s",buf);//�ļ����ݵĽ�βû�л��з�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}