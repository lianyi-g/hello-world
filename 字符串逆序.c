#define _CRT_SECURE_NO_WARNINGS 1

//------------------------------3 �ݹ�ʵ������
//#include <stdio.h>
////�ݹ� ʵ��my_strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	int i =0;
//	if(*str=='\0')
//	{
//		return 0;	
//	}	
//	else
//	{
//		return 1+my_strlen(str+1);
//	}
//}
//void reverse_string(char arr[],int len)
//{
//	//"abcdefg\0"��reverse_string("abcdefg")--�ɷֽ�Ϊ�ٽ���a��g��������bcde,reverse_string("bcdef")
//	//������tmp�洢a��ֵ��g����a��ֵ��f�ĺ�����ʱ��һ��\0����ԭ��g��λ�ã�a=temp��"gbcdef\0\0"
//	int temp = 0;
//	temp = arr[0];
//	arr[0] = arr[len-1];
//	arr[len-1] = '\0';
//	//�ݹ���������
//	if(len>=2)
//		reverse_string(arr+1,len-2);
//	arr[len-1] = temp;
//}
//int main()
//{
//	char arr[] = {"abcdefg"};
//	//char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	reverse_string(arr,len);
//	printf("%s\n",arr);
//	return 0;
//}
//---------------------------2 ��ʹ�ÿ⺯��
#include <stdio.h>

//int my_strlen(char arr[])
//{
//	int i = 0;
//	int len = 0;
//	while(arr[i]!='\0')
//	{
//		len++;
//		i++;
//	}
//	return len;
//}
//�ݹ� ʵ��strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	int i =0;
//	if(*str=='\0')
//	{
//		return 0;	
//	}	
//	else
//	{
//		return 1+my_strlen(str+1);
//	}
//}
//void reverse_string(char arr[],int len)
//{
//	int left = 0;
//	int right = len-1;
//	while(left<=right)
//	{
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}	
//}
//int main()
//{
//	char arr[] = {"abcdef"};
//	//char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	reverse_string(arr,len);
//	printf("%s\n",arr);
//	return 0;
//}

//---------------------------1
//#include <stdio.h>
//#include <string.h>//ʹ���˿⺯��
//void reverse_string(char arr[],int len)
//{
//	int left = 0;
//	int right = len-1;
//	while(left<=right)
//	{
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}	
//}
//int main()
//{
//	char arr[] = {"abcdef"};
//	int len = strlen(arr);
//	reverse_string(arr,len);
//	//��ӡ��
//	//int i = 0;
//	//for(i=0; i<len; i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//	//��ӡ��
//	printf("%s\n",arr);
//	return 0;
//}

