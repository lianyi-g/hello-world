//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//void A(char* s)
//{
//	int len = strlen(s);
//	char *p = s+len-1;//ָ��ĩβ��ָ��
//	if(strchr(s,'.'))
//	{
//		while(*p == '0')//ָ��ǰ��ȥ�������0
//		{
//			*p-- = 0;//��ԭ���ġ�0��--ASCII->48���ĳɡ�\0'ASCII->0������ָ��ǰ��һ����λ
//		}			
//		if(*p == '.')
//			*p = 0;
//	}
//}
//int main()
//{
//	char *pa,*pb;
//	char a[100024],b[100024];
//	while(scanf("%s%s",&a,&b)!=EOF)
//	{
//		pa = a;
//		pb = b;
//		while(*pa =='0')//ָ�����ȥ������������Ч��λǰ���0--��00001.120
//			pa++;
//		while(*pb =='0')
//			pb++;
//		A(pa);//ʹָ��ָ��С�����ֵ���Ч��λ
//		A(pb);
//		puts(strcmp(pa,pb) ? "NO" : "YES");
//	}
//	return 0;
//}