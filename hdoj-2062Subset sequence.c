//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int i,n,s[21];
//	_int64 m,t;
//	_int64 c[21] = {0};
//	for(i=1; i<21; i++)
//	{
//		c[i] = c[i-1] * (i-1) + 1;//ÿ�����и���
//	}
//	while(scanf("%d%I64d",&n,&m)!=EOF)
//	{
//		for(i=0; i<21; i++)
//			s[i] = (int)i;//ÿ�����е�һ������
//		while(n-- && m)
//		{
//			if(t = m/c[n+1] + ((m % c[n+1]) ? 1 : 0))//Ѱ��m��Ӧ������
//			{
//				printf("%d",s[t]);
//				for(i = (int)t; i<=n; s[i] = s[i+1],i++);
//				m -= (t-1)*c[i] + 1;
//				putchar(m ? ' ' : '\n');
//			}
//		}
//	}
//	return 0;
//}