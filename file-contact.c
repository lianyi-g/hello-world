//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include "file-contact.h"
////ʵ�֣�����������
//void InitContact(struct Contact * ps)
//{
//	//memset(ps->data,0,sizeof(ps->data));
//	//ps->data = (struct PeoInfo*)calloc(ps->capacity,sizeof(struct PeoInfo));
//	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ*sizeof(struct PeoInfo));
//	if(ps->data == NULL)
//		return;
//	ps->capacity = DEFAULT_SZ;//��ʼ����
//	ps->size = 0;//����Ԫ��
//
//	LoadContact(ps);
//
//}
//void Check_Capacity(struct Contact* ps);
//void LoadContact(struct Contact* ps)
//{
//	PeoInfo tmp = {0};
//	FILE* pfRead = fopen("contact.date","rb");
//	if(pfRead==NULL)
//	{
//		printf("LoadContact::%s\n",strerror(errno));
//		return;
//	}
//	//fread�����з���ֵ�����ص���ʵ�ʶ�ȡ����Ԫ�ظ���
//	
//	while(fread(&tmp,sizeof(PeoInfo),1,pfRead))
//	{
//		Check_Capacity(ps);
//		ps->data[ps->size] = tmp;//ps->size ��ʼֵΪ0
//		ps->size++;
//	}
//
//	fclose(pfRead);
//	pfRead = NULL;
//}
//
//void Check_Capacity(struct Contact* ps)
//{
//	if(ps->size == ps->capacity)
//	{
//		PeoInfo* ptr = (PeoInfo*)realloc(ps->data,(ps->capacity+2)*sizeof(PeoInfo));
//		if(ptr!=NULL)
//		{
//			ps->data = ptr;
//			ps->capacity = ps->capacity + 2;
//			printf("���ݳɹ�\n");
//		}
//		else
//		{
//			printf("����ʧ��\n");
//		}
//		
//	}
//}
//
//void SaveContact(struct Contact* ps)
//{
//	int i;
//	FILE* pfWrite = fopen("contact.date","wb");
//	if(pfWrite==NULL)
//	{
//		printf("SaveContact::%s\n",strerror(errno));
//		return;
//	}
//	for(i=0; i<ps->size; i++)
//	{
//		fwrite(&(ps->data[i]),sizeof(PeoInfo),1,pfWrite);
//	}
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//}
//
//void AddContact(struct Contact* ps)
//{	
//	Check_Capacity(ps);
//
//	//�����������±�ǡ��ʱsize��С
//	printf("����������:->");
//	scanf("%s",ps->data[ps->size].name);
//	printf("����������:->");
//	scanf("%d",&(ps->data[ps->size].age));
//	//����age��������������洢�����Բ�����ȡ��ַ
//	printf("�������Ա�:->");
//	scanf("%s",ps->data[ps->size].sex);
//	//ps->data[ps->size].sex����PeoInfo��Ա����sex-��������ʵ������һ����ַ��
//	printf("������绰:->");
//	scanf("%s",ps->data[ps->size].tele);
//	printf("�������ַ:->");
//	scanf("%s",ps->data[ps->size].addr);
//	ps->size++;
//}
////ɾ�������ң��޸ģ�����ʹ�õ������±�����ʣ�ר������һ�������������ٴ�������
////����static���Σ�ʹ�ú���ֻ���ڸ��ļ����ҵ�������Ҫ��¶���û�
//static int FindByName(const struct Contact* ps,char name[MAX_NAME])
//{
//	int i;
//	for(i=0; i<ps->size; i++)
//	{
//		if(0==strcmp(ps->data[i].name,name))
//			return i;//�ҵ��ˣ������±�
//	}
//	return -1;//û���ҵ�
//}
//
//void DelContact(struct Contact* ps)
//{
//	int pos;
//	char name[MAX_NAME];
//	printf("������Ҫɾ�����˵�������");
//	scanf("%s",name);
//	//����ɾ��Ŀ���λ��
//	pos = FindByName(ps,name);
//	//ɾ��
//	if(pos==-1)
//		printf("Ҫɾ�����˲����ڣ�\n");
//	else
//	{
//		int j = 0;
//		//Ҫɾ��Ŀ�����Ԫ������ǰ��һ����λ
//		for(j=pos; j<ps->size; j++)
//		{
//			ps->data[j] = ps->data[j+1];
//		}
//		ps->size--;
//	}
//	
//}
//
//void SearchContact(const struct Contact* ps)
//{
//	int pos;
//	char name[MAX_NAME];
//	printf("������Ҫ���ҵ��˵�������");
//	scanf("%s",name);
//	//����Ŀ���λ��
//	pos = FindByName(ps,name);
//	//����
//	if(pos==-1)
//		printf("Ҫ���ҵ���Ϣ�����ڣ�\n");
//	else
//	{
//		printf("%-6s\t%-4s\t%-4s\t%-13s\t%-10s\n","����","����","�Ա�","�绰","סַ");
//		printf("%-6s\t%-4d\t%-4s\t%-13s\t%-20s\n"
//			,ps->data[pos].name
//			,ps->data[pos].age
//			,ps->data[pos].sex
//			,ps->data[pos].tele
//			,ps->data[pos].addr);
//	}
//}
//
//void ModifyContact(struct Contact* ps)
//{
//	int pos;
//	char name[MAX_NAME];
//	printf("������Ҫ�޸ĵ��˵�������");
//	scanf("%s",name);
//	//�����޸�Ŀ���λ��
//	pos = FindByName(ps,name);
//	//�޸�
//	if(pos==-1)
//		printf("Ҫ�޸ĵ���Ϣ�����ڣ�\n");
//	else
//	{
//		printf("����������:->");
//		scanf("%s",ps->data[pos].name);
//		printf("����������:->");
//		scanf("%d",&(ps->data[pos].age));
//		printf("�������Ա�:->");
//		scanf("%s",ps->data[pos].sex);
//		printf("������绰:->");
//		scanf("%s",ps->data[pos].tele);
//		printf("�������ַ:->");
//		scanf("%s",ps->data[pos].addr);
//		printf("�޸ĳɹ���\n");
//	}
//}
//
//int Cmp_By_Age(const void* p1,const void* p2)
//{
//	return (((struct Contact*)p1)->data)->age - (((struct Contact*)p2)->data)->age;//error
//	/*if(((((struct Contact*)p1)->data)->age > (((struct Contact*)p2)->data)->age))
//		return 1;
//	else 
//		return -1;*/
//}
//void SortContact(struct Contact* ps)
//{
//	int sz = sizeof(ps->data)/sizeof(ps->data[0]);
//	qsort(ps->data,sz,sizeof(ps->data[0]),Cmp_By_Age);
//	printf("������ɣ�\n");
//}
//void ShowContact(const struct Contact* ps)
//{
//	int i;
//	if(ps->size==0)
//	{
//		printf("ͨѶ¼Ϊ��\n");
//	}
//	else
//	{
//		//int i;
//		printf("%-6s\t%-4s\t%-4s\t%-13s\t%-10s\n","����","����","�Ա�","�绰","סַ");
//		for(i=0; i<ps->size; i++)
//		{
//			printf("%-6s\t%-4d\t%-4s\t%-13s\t%-20s\n"
//				,ps->data[i].name
//				,ps->data[i].age
//				,ps->data[i].sex
//				,ps->data[i].tele
//				,ps->data[i].addr);
//		}
//	}
//}
//
//
//
//
//
//void DestroyContact(struct Contact* ps)
//{
//	free(ps->data);
//	ps->data = NULL;
//}