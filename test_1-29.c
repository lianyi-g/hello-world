#define _CRT_SECURE_NO_WARNINGS 1

//----------------------1
#include<stdio.h>
#include<string.h>

int main()
{
	char password[20];
	int i = 0;
	for(i=1; i<=3; i++)
	{
		printf("�������������룺\n");
		scanf("%s",password);
		//strcmp,�����Ƚ������ַ����Ƿ���ȣ���һ���ַ������ڵڶ����ַ���ʱ������һ������0��������֮
		//����һ��С��0���������ʱ����ֵΪ0����"=="�޷������ж��ַ�����
		if(strcmp(password,"123456")==0)
		{
			printf("��¼�ɹ���\n");	
			break;
		}	
		else
			printf("������������ԣ�\n");
	}
	if(i>3) 
		printf("������������󣬳����Զ��˳�\n");
	return 0;
}

////----------------------1
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n",arr2);
//	return 0;
//}