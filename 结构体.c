#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------3  �ṹ�崫��
//#include <stdio.h>
//typedef struct stu//Ҫ������print1����֮ǰ
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];	
//}stu;
//
//void print1(struct stu tmp)
//{
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex: %s\n",tmp.sex);
//}
//void print2(stu* str)//�ṹ��ָ��
//{
//	printf("name: %s\n",str->name);
//	printf("age: %d\n",str->age);
//	printf("tele: %s\n",str->tele);
//	printf("sex: %s\n",str->sex);
//}
//
//
//
//int main()
//{
//	stu s = {"С��",20,"13521228889","��"};
//	print1(s);
//	printf("\n");
//	print2(&s);
//	//�������ε�ʱ������Ҫѹջ�ģ����ֱ�Ӵ���һ���ṹ������ഫֵ�ľ��񣩣��ṹ����ܹ���
//	//ϵͳ�Ŀ�����Ƚϴ󣬹���ѡprint2���������ýṹ��ָ�룬��ַ
//	return 0;
//}
//-------------------------2

//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr1[] ="hello bit!";
//	struct T t ={"hi",{100,'s',"hello world!",2.33},arr1};
//	printf("%s\n",t.ch);
//	printf("%d\n",t.s.a);
//	printf("%c\n",t.s.c);
//	printf("%s\n",t.s.arr);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.pc);
//	return 0;
//}

//-------------------------1
//#include <stdio.h>
//�ṹ�嶨���൱��һ����䣬����Ҫ�ֺţ�
//�ṹ��ؼ��� �ṹ���ǩ��
//{
//	��Ա����
//}������a��b��c��//���������壬�����abc��ȫ�ֽṹ�� ������һ�㲻�Ƽ�ʹ��
//struct stu//��
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//};
//typedef struct stu//��
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//}stu;//typedef�������ؼ��֣���struct stu ������Ϊstu�������stu������
//int main()
//{
//	struct stu s1;//�ֲ��ṹ�����--�٣�struct stu������ s1�Ǳ�����
//	stu s2;//�ڣ�stu������ s2�Ǳ�����
//	return 0;
//}