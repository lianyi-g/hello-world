//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	while(scanf("%d%d",&m,&n)!=EOF)
//	{
//		if(m>=100 && n<=999 &&m<=n)
//		{
//			int a,b,c,i,flag;
//			flag = 0;
//			for(i=m; i<=n; i++)
//			{
//				a = i/100;
//				b = i/10%10;
//				c = i%10;
//				if(i==(a*a*a + b*b*b + c*c*c))
//				{
//					if(flag==1)
//						printf(" ");//��ֹ�����ʽ��������������û�пո�
//					printf("%d",i);
//					flag = 1;
//				}
//				
//			}
//			if(flag==0)
//				printf("no\n");
//			else
//				printf("\n");
//		}
//	}
//	return 0;
//}