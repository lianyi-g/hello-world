//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* left,char* right)
//{
//	assert(left);
//	assert(right);
//	while(left<right)
//	{
//		char tmp;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	int len = strlen(arr);
//	assert(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//����ȫ��
//}
//int is_left_move(char* s1,char* s2)
//{
//	int i;
//	int len = strlen(s1);
//	assert(s1);
//	assert(s2);
//	for(i=0; i<len; i++)
//	{
//		left_move(s1,1);
//		if(strcmp(s1,s2)==0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	//�������
//	//ʵ��һ������������k���ַ�
//	//��ABCD����1���ַ������ΪBCDA
//	//��ABCD����2���ַ������ΪCDAB
//	//�ȴ洢��һ���ַ���ʣ���ַ�����ǰ�ƣ�֮ǰ���Ǹ��ַ���������������Ԫ������λ��
//
//	//��������
//	//һ���ַ��������������k�����������ұ�ʣ�µģ�������������壬�ɴﵽĿ��
//	//���������壬���������k���������ұ�ʣ�µģ�Ҳ����
//	char arr[] = "abcdef";
//	char arr1[] = "abcdefg";
//	char arr2[] = "cdefgab";
//	int ret;
//	left_move(arr,4);
//	printf("%s\n",arr);
//	//�ж��Ƿ�һ���ַ�������һ���ַ����������ַ���
//	//��
//	ret = is_left_move(arr1,arr2);
//	if(ret==1)
//		printf("�������ַ�����\n");
//	else
//		printf("���������ַ�����\n");
//	return 0;
//}