//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//
//struct T
//{
//	char c;
//	int i;
//	double d;
//};
//void init(struct T* ps)//�ṹ��ָ���� -> ���ʳ�Ա����
//{
//	//Ҫͨ�������޸��ⲿ��ֵ��Ӧ���ô�ַ����
//	ps->c = 'a';
//	ps->d = 1.223;
//	ps->i = 20;
//}
//void print1(struct T tmp)//�ṹ������� . ���ʳ�Ա����
//{
//	printf("%c %d %lf\n",tmp.c,tmp.i,tmp.d);
//}
//void print2(const struct T* ps)
//{
//	//�������ܽ���Ҫ���ӡ��const���α�֤ps��ָ���ַ���ݲ��ɸı䣬��߰�ȫ��
//	printf("%c %d %lf\n",ps->c,ps->i,ps->d);
//}
//int main()
//{
//	//��ֵ���ô���ʱ����������ʱ����������ʱ�ṹ����ռ�ڴ����ѹջʱ����ɲ���Ҫ�Ŀ���
//	//����ַ��������ָ��̶�4/8���ֽ�
//	//�ʽṹ�崫��ʱ��������ַ
//	struct T t = {0};
//	init(&t);//��ַ
//	print1(t);//��ֵ
//	print2(&t);
//	return 0;
//}