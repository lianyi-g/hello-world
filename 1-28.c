#define _CRT_SECURE_NO_WARNINGS 1

////---------------3
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book book1 = {"c���Գ������",43};
//	strcpy(book1.name,"C++");
//	book1.price = 20;
//	printf("book1 is : %s\n",book1.name);
//	printf("price is : %d\n",book1.price);
//	//strcpy���ַ�����������
//	return 0;
//}

////---------------2
//#include<stdio.h>
//
////�ṹ�嶨��
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book book1 = {"c���Գ������",43};
//	//printf("������%s\n",book1.name);
//	//printf("�۸�%d\n",book1.price);
//	//����ָ���ӡ��Ϣ
//	//struct Book* pd = &book1;
//	//printf("������%s\n",pd->name);
//	//printf("�۸�%d\n",pd->price);
//
//	//printf("������%s\n",(*pd).name);
//	//printf("�۸�%d\n",(*pd).price);
//	//.  �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//�ر�ע�⣬c�������﷨�涨������Ҫ�����ڴ����ǰ���֣�������ܱ�������ȱ�٣���ʶ��������
//	//int a = 29;
//	//int* p = &a;  
//	//printf("a = %d\n",a);
//	//printf("address = %p\n",&a);
//	////%p��ӡ��ַ
//	//printf("����a�ĵ�ַ�ǣ�%p\n",p);
//	//*p = 39;
//	//printf("�޸Ĺ����a��ֵΪ��%d\n",a);
////--------------
//	//double pd = 3.14;
//	//double* p = &pd;
//	//*p = 3.14159;
//	//printf("�޸Ĺ���pd��ֵΪ��%lf\n",pd);
//	//printf("�޸Ĺ���pd��ֵΪ��%lf\n",*p);//���double��%lf
////--------------
//	//ָ��Ĵ�Сsizeofֻ��������λ���йأ���32λ������ָ���С��Ϊ32bit��4byte
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(float*));
//	printf("%d\n",sizeof(double*));
//	return 0;
//}