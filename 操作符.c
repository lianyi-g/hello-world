#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
////�ṹ��Ҳ��һ�����ͣ������͵���������������������
//struct Stu//����һ���ṹ�����ͣ���������struct Stu
//{
//	//��Ա����
//	int age;
//	char name[20];
//	char id[20];
//};
//int main()
//{
//	//ʹ�ýṹ�����ͣ������ṹ�����,����ʼ��
//	struct Stu s1 = {21,"����","20210206"};
//	struct Stu* ps = &s1;
//	//���ʳ�Ա������ʽ�ٽṹ�����.��Ա����
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.name);
//	printf("%s\n",s1.id);
//	//������ָ��
//	printf("%d\n",(*ps).age);
//	//������ָ��--�ṹ��ָ��->��Ա����
//	printf("%d\n",ps->age);
//	return 0;
//}