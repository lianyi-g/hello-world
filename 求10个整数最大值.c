#define _CRT_SECURE_NO_WARNINGS 1

////-----------------3 ���ֲ���
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = {2,4,6,8,10,13,15,29,34,66};
//	int left,right,targ,mid;
//	left = 0;
//	right = sizeof(arr)/sizeof(arr[0]) - 1;
//	printf("input\n");
//	scanf("%d",&targ);//scanf������䣬����������ֵ�������ֵ�൱���Ѿ��Ա�������ֵ
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(arr[mid]>targ)
//			right = mid - 1;
//		else if(arr[mid]<targ)
//			left = mid + 1;
//		else
//		{
//			printf("���ҳɹ������±�Ϊ��%d\n",mid);
//			break;
//		}
//			
//	}
//	if(left>right)
//		printf("����ʧ�ܣ�\n");
//	return 0;
//}

////-----------------2 ��Ļ���9*9�˷��ھ���
//#include<stdio.h>
//
//int main()
//{
//	int i,j,sum;
//	for(i=1; i<10; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			sum = i*j;
//			printf("%d*%d=%-2d ",i,j,sum);//�����--�Ҷ���%2d
//		}
//		printf("\n");
//	}
//	return 0;
//}
////-----------------1
//#include<stdio.h>
//
//int main()
//{
//	int a[10],i;
//	int max = 0;
//	printf("input:\n");
//	for(i=0; i<10; i++)
//		scanf("%d",&a[i]);
//	//for(i=1; i<10 ;i++) //��
//	//{
//	//	int temp = 0;
//	//	if(a[0]<a[i])
//	//	{
//	//		temp = a[0];
//	//		a[0] = a[i];
//	//		a[i] = temp;
//	//	}
//	//}
//	for(i=0; i<10 ;i++) //��
//	{
//		if(max<a[i])
//			max = a[i];
//	}
//	//printf("max = %d\n",a[0]);//��
//	printf("max = %d\n",max);//��
//	return 0;
//}