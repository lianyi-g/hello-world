//#define _CRT_SECURE_NO_WARNINGS 1
////�����Ĵ���
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int n,i,len,flag;
//	char ch[100];
//	while(scanf("%d",&n)!=EOF)
//	{
//		for(i=0; i<n; i++)
//		{
//			char* start;//����ָ������ַ���ָ��
//			char* end;//����ָ���ұ��ַ���ָ��
//			scanf("%s",&ch);
//			start = ch;
//			len = strlen(ch);
//			end = ch+len-1;
//			flag = 1;//�Ƿ��ǻ��Ĵ���־
//			while(start<end)
//			{
//				if(*start!=*end)
//					flag = 0;
//				start++;
//				end--;
//			}
//			if(flag==1)
//				printf("yes\n");
//			else
//				printf("no\n");
//		}
//
//	}
//
//	return 0;
//}