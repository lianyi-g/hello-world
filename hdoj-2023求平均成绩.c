//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,i,j,count,flag;
//	double score[50][5];
//	double course[5];
//	double sum_person,sum_course,avg_person,avg_course;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{		
//		for(i=0; i<n; i++)//��������
//		{
//			for(j=0; j<m; j++)
//			{
//				scanf("%lf",&score[i][j]);
//			}			
//		}
//		//���ÿ���˿γ̵�ƽ���ɼ�==ÿ���˵��ܳɼ�/�γ�����
//		for(i=0; i<n; i++)
//		{
//			sum_person = 0;
//			for(j=0; j<m; j++)//ÿ�����
//			{
//				sum_person += score[i][j];//ÿ���˵��ܳɼ�
//			}
//			avg_person = sum_person/m;
//			printf("%.2f",avg_person);
//			if(i<n-1)
//				printf(" ");
//		}
//		printf("\n");
//		//���ÿ�ſγ̵�ƽ���ɼ�==���ſγ������˵ķ���֮��/������
//		for(j=0; j<m; j++)
//		{
//			sum_course = 0;
//			for(i=0; i<n; i++)//ÿ�����
//			{
//				sum_course += score[i][j];//ÿ���˵��ܳɼ�
//			}
//			avg_course = sum_course/n;
//			course[j] = avg_course;//��ſγ̵�ƽ���ɼ�
//			//if(score)
//			printf("%.2f",avg_course);
//			if(j<m-1)
//				printf(" ");
//		}
//		printf("\n");
//		//����ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ������
//		count = 0;
//		for(i=0; i<n; i++)
//		{
//			flag = 1;
//			for(j=0; j<m; j++)
//			{
//				if(course[j]>score[i][j])
//					flag =0;
//			}
//			if(flag==1)
//				count++;
//		}
//		printf("%d\n",count);
//		printf("\n");
//	}
//	return 0;
//}