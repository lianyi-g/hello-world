#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
////�ݹ�ʵ�֣���Digital_sum(1729)�ֽ�Ϊ��Digital_sum(172)+1729%10  Digital_sum(172)+9
////��һ����						 Digital_sum(17)+172%10+1729%10  Digital_sum(17)+2+9
////��һ����					Digital_sum(1)+17%10+172%10+1729%10  Digital_sum(1)+7+2+9
//
//int Digital_sum(unsigned n)
//{
//	if(n>9)
//	{
//		return Digital_sum(n/10) + n%10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	printf("%d\n",Digital_sum(num));
//	return 0;
//}
