//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,i,num;
//	int arr[101];
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		if(n==0 && m==0)
//			break;
//		if(n==0) //�ж������Ƿ�Ϊ�� 
//			printf("%d\n",m);
//		else
//		{
//			//Ѱ�ұ�m��ĵ�һ��Ԫ�أ�����Ԫ�ؼ���������Ԫ�غ���һλ
//			num = 0;
//			for(i=0; i<n; i++)
//			{
//				scanf("%d",&arr[i]);
//				if(m>arr[i])
//					num = i+1;
//			}
//			for(i=n-1; i>=num; i--)
//			{
//				arr[i+1] = arr[i];
//			}
//			arr[num] = m;
//			n++;
//		}
//		//��ӡ���	
//		for(i=0; i<n; i++)
//			{
//				printf("%d",arr[i]);
//				if(i<n-1)
//					printf(" ");
//			}
//			printf("\n");		
//	}
//	return 0;
//}