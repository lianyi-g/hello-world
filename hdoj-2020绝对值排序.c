#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,temp,flag;
	int arr[100];
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		//�������������
		for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		//���������������--ð������		
		for(i=0; i<n-1; i++)//ȷ������
		{
			flag = 0;//�Ƿ��Ѿ������־
			for(j=0; j<n-i-1; j++)//ȷ�������Ƚϴ���
			{
				if(abs(arr[j])<abs(arr[j+1]))
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					flag = 1;//��������򲿷�����
				}
			}
			if(flag==0)
				break;
		}
		//��������
		for(i=0; i<n; i++)
		{
			printf("%d",arr[i]);
			if(i<n-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}