#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char c = 1;
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(+c));//+c��һ�����ʽ��ֻҪ������ʽ���㣬С�����͵Ķ��ᷢ����������
	printf("%d\n",sizeof(!c));
	return 0;
}