#define _CRT_SECURE_NO_WARNINGS 1

//------------------4
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	//scanf/printf ����Ա�׼����/������� ��ʽ������/������
//	//fsacnf/fprintf��������б�׼����/������� ��ʽ������/������
//	//scanf�Ǵ��ַ����ж�ȡ��ʽ��������
//	//sprintf�ǰѸ�ʽ����������ɣ��洢�����ַ���
//
//	struct S s = {100,3.14f,"abcd"};
//	struct S tmp = {0};
//	char buf[1024] = {0};
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf��
//	sprintf(buf,"%d %.2f %s",s.n,s.score,s.arr);
//	//printf("%s\n",buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);
//
//	printf("%d %.2f %s\n",tmp.n,tmp.score,tmp.arr);
//
//	return 0;
//}

//------------------3
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %.2f %s",s.n,s.score,s.arr);
//	return 0;
//}
//------------------2
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//		return 0;
//	//��ʽ����ʽ��������
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);//���ļ�����������ֵ
//	printf("%d %f %s\n",s.n,s.score,s.arr);//�����ֵ
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//------------------1
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"bit"};
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//		return 0;
//	//��ʽ����ʽд�ļ�
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}