//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int int_cmp(const void *p1, const void *p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int n,m,i,j;
//	int s[101];
//	while(scanf("%d%d",&n,&m),m+n)//һ�����ű��ʽ
//	{
//		for(i=0; i<n; i++)
//			scanf("%d",s+i);
//		for(i=0;i<m; i++)
//		{
//			scanf("%d",s+n);//����A���Ϻ�ĵ�һ��Ԫ�أ���B����Ԫ��
//			for(j=0; s[j]!=s[n]; j++)//����A���Ƿ����������Ԫ�����Ԫ�ص��±�
//				;
//			if(j!=n) 
//				s[j] = s[--n];//������ڣ���A�����һ��Ԫ�أ������±��ӦԪ�أ���ɾ����Ԫ��
//		}
//		qsort(s,n,sizeof(int),int_cmp);//��A���ϴ�С���������бȽ�
//		for(i=0; i<n; i++)
//			printf("%d ",s[i]);
//		printf(n ? "\n" : "NULL\n");
//	}
//	return 0;
//}