//#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	//Ԥ������ţ����������õģ����ö����ֱ��ʹ��
//	/*printf("%s\n",__FILE__);
//	printf("%d\n",__LINE__);
//	printf("%s\n",__DATE__);
//	printf("%s\n",__TIME__);*/
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = {0};
//	FILE* pf = fopen("log.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf,"file:%s line:%d date:%s time:%s function:%s i=%d\n",
//			__FILE__,__LINE__,__DATE__,__TIME__,__FUNCTION__,i);
//
//	}
//	fclose(pf);
//	pf = NULL;
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}