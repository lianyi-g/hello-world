//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//��������������nλ��ÿһλ��n�η�֮�ͣ����ڸ�����ֵ
//	int n,sum,i,j;
//	for(i=0; i<100000; i++)
//	{	
//		j = i;
//		n = 1;//ͳ��λ��
//		sum = 0;
//		while(j /= 10)
//		{
//			n++;
//		}
//		//�ж�
//		j = i;
//		while(j)
//		{
//			sum += pow((float)(j % 10),n);
//			j /= 10; 
//		}
//		if(sum==i)
//			printf("%d ",i);
//	}
//	return 0;
//}