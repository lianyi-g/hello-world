//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int i,j,p[102];
//	int l,n,c,t;
//	int vr,v1,v2;
//	int len;
//	double dp[102],min,e;
//	while(scanf("%d",&l)!=EOF)
//	{
//		scanf("%d%d%d",&n,&c,&t);
//		scanf("%d%d%d",&vr,&v1,&v2);
//		dp[0] = p[0] = 0;
//		for(i=1; i<=n; i++)
//		{
//			scanf("%d",p+i);
//		}
//		p[i] = l;
//		for(i=1; i<n+2; i++)
//		{
//			min = 0xffffff;
//			for(j=0; j<i; j++)
//			{
//				len = p[i] - p[j];
//				e = len>c ? 1.0*c/v1 + (len-c+0.0)/v2: 1.0*len/v1;
//				e += dp[j];
//				if(j)
//					e += t;
//				if(min>e)
//					min = e;
//			}
//			dp[i] = min;
//		}
//		//puts(1.0 * 1 / vr > dp[n+1] ? "What a pity rabbit!" : "Good job,rabbit!");
//		puts(1.0 * l / vr > dp[n+1] ? "What a pity rabbit!" : "Good job,rabbit!");
//	}
//	return 0;
//}