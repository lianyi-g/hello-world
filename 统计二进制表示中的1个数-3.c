#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------3 ��ӡһ��int�����Ƶ�����λ��ż��λ����
//#include <stdio.h>
//
//void print(int n)
//{
//	int i = 0;
//	int bit = 0;
//	printf("����λ��\n");
//	//00000000 00000000 00000000 00001111
//	//31 30..........................3210
//	for(i=30; i>=0; i-=2)
//	{
//		bit = (n>>i)&1;
//		printf("%d ",bit);
//
//		//printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for(i=31; i>=1; i-=2)
//	{
//		bit = (n>>i)&1;
//		printf("%d ",bit);
//
//		//printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//-------------------------2 ͳ������int����������λ��ͬλ�ĸ���
//�������--��ͬΪ1��ͬΪ0--������num = num & (num-1)ͳ��1�ĸ���
//#include <stdio.h>
//
//int get_diff_bit(int tmp)
//{
//	int count = 0;
//	while(tmp)
//	{
//		tmp = tmp & (tmp-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m =0;
//	int n = 0;
//	int count = 0;
//	int tmp = 0;
//	scanf("%d%d",&m,&n);
//	tmp = m^n;
//	count = get_diff_bit(tmp);
//	printf("count = %d\n",count);
//	return 0;
//}


//-------------------------1
//#include <stdio.h>
//
//int Count_one(int num)
//{
//	int count = 0;
//	while(num)
//	{
//		num = num & (num-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//11&10-1101&1100 = 1100,
//	//10&9 -1100&1001 = 1000,
//	//�۲�ɵù��ɣ�n&n-1�������n��Ƚ϶����Ʊ�ʾ ����һ��1
//
//	int num = 0;
//	int i = 0;
//	scanf("%d",&num);
//	i = Count_one(num);
//	printf("%d\n",i);
//	return 0;
//}