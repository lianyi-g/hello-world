#define _CRT_SECURE_NO_WARNINGS 1

//------------------5
#include<stdio.h>
int main()
{
	char ch = getchar();
	putchar(ch);
	printf("%c\n",ch);
	return 0;
}

////------------------4
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(5==i)
//			continue;
//		//���Ա���ѭ��continue�����������䣬ֱ����ת�������ж���䣬���ܻᵼ����ʽ��ѭ��
//		printf("%d ",i);
//		i++;
//	}
//	//while(i<=10)
//	//{
//	//	if(5==i)
//	//		break;//����break��������Ĵ����Ŵ���飬����ѭ����ʱ������ѭ��������ֹ
//	//	printf("%d ",i);
//	//	i++;
//	//}
//}

////------------------3
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������!\n");
//		break;
//	case 6:
//	case 7:
//		printf("��ĩ˫��\n");
//		break;
//	default :
//		printf("�������\n");
//		break;
//		
//	}
//	return 0;
//}

////------------------2
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)//switch�������ŵ��жϱ��ʽ���ͱ���Ϊ���Σ�case�������������ǳ������ʽ
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default :
//		printf("�������\n");
//		break;
//		
//	}
//	return 0;
//}

////------------------1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		printf("%d  ",i);
//		i+=2;
//	}
//	//while(i<100)
//	//{
//	//	if(0 != i%2)
//	//		printf("%d   ",i);
//	//	i++;
//	//}
//	return 0;
//}