#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//���ڱ��ʽn^2+n+41����n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)��
//�ж��ñ��ʽ��ֵ�Ƿ�Ϊ������
//���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x=0,y=0ʱ����ʾ������������в�������
//����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK",�����������Sorry��,ÿ�����ռһ�С�
int  sushu(int n)
{
	int i = 0;
	for(i=2; i<sqrt(n*1.0); i++)
	{
		//������������0
		if(n%i==0)
			return 0;
	}
	//����������1
	return 1;
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		getchar();
		if((a==0&&b==0)||a>b||a<-39||b>50)
			break;
		else
		{
			//ȫΪ������־����ʼ����Ϊ1
			int flag = 1;
			int i = 0;
			for(i=a; i<=b; i++)
			{
				int n = i*i+i+41;
				if(sushu(n)!=1)
					flag = 0;
			}
			if(flag==1)
				printf("OK\n");
			else
				printf("Sorry\n");
		}			
	}
	return 0;
}