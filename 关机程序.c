#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <Windows.h>
#include <string.h>

int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 60 ");
	while(1)
	{
		printf("���ĵ��Խ���һ���Ӻ�ػ������롰��������ȡ�����\n");
		scanf("%s",arr);
		if(0==strcmp(arr,"������"))//ʹ��strcmp�����Ƚ������ַ����Ƿ���ȣ���ȷ���0��ǰ�ߴ��ں��߷�������
			system("shutdown -a");
	}
	return 0;
}