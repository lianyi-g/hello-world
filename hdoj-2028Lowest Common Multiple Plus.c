//#define _CRT_SECURE_NO_WARNINGS 1
//����С������
//#include <stdio.h>
//
//typedef unsigned long UL;
//
//UL gcd(UL u,UL v)//�����Լ��
//{
//	int remainder;
//	while(remainder=u%v)
//	{
//		u = v;
//		v = remainder;
//	}
//	return v;
//}
//UL lcm(UL u,UL v)//����С������
//{
//	return u*v/gcd(u,v);
//}
//int main()
//{
//	int n,i;
//	UL num,res;
//	while(scanf("%d",&n)!=EOF)
//	{
//		res = 1;//����n=1�����
//		for(i=0; i<n; i++)
//		{
//			scanf("%lu",&num);
//			res = lcm(res,num);
//		}
//		printf("%lu\n",res);
//		
//	}
//	return 0;
//}