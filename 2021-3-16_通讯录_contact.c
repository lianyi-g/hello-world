#define _CRT_SECURE_NO_WARNINGS 1


#include "2021-3-16_ͨѶ¼_contact.h"
//ʵ�֣�����������
void InitContact(struct Contact * ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size = 0;//���0��Ԫ��
}

void AddContact(struct Contact* ps)
{
	if(ps->size == MAX)
		printf("\n");
	else
	{
		//�����������±�ǡ��ʱsize��С
		printf("����������:->");
		scanf("%s",ps->data[ps->size].name);
		printf("����������:->");
		scanf("%d",&(ps->data[ps->size].age));
		//����age��������������洢�����Բ�����ȡ��ַ
		printf("�������Ա�:->");
		scanf("%s",ps->data[ps->size].sex);
		//ps->data[ps->size].sex����PeoInfo��Ա����sex-��������ʵ������һ����ַ��
		printf("������绰:->");
		scanf("%s",ps->data[ps->size].tele);
		printf("�������ַ:->");
		scanf("%s",ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void DelContact(struct Contact* ps)
{

}
void ShowContact(const struct Contact* ps)
{
	int i;
	if(ps->size==0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-6s\t%-4s\t%-4s\t%-13s\t%-10s\n","����","����","�Ա�","�绰","סַ");
		for(i=0; i<ps->size; i++)
		{
			printf("%-6s\t%-4d\t%-4s\t%-13s\t%-20s\n"
				,ps->data[i].name
				,ps->data[i].age
				,ps->data[i].sex
				,ps->data[i].tele
				,ps->data[i].addr);
		}
	}
}