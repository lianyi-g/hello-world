//#define _CRT_SECURE_NO_WARNINGS 1
//
////1 3
////3 4
////0 7
////3 8
////15 19
////15 20
////10 15
////8 18
////6 12
////5 10
////4 14
//////2 9
//#include<stdio.h>                  //̰���㷨 ��Ҳ������Ϊ�Ƕ�̬�滮�� 
//int main(){
//    int n,i,j,count,temp,k;
//    int ts[101],te[101];
//    while(scanf("%d",&n)!=EOF){
//    	if(n==0)break;            //n=0��ʾ�����������������
//    	for(i=0;i<n;i++){
//    		scanf("%d",&ts[i]);
//    		scanf("%d",&te[i]);
//		}
//		for(i=0;i<n;i++){         //��ʱ���С�������� 
//			for(j=i;j<n-1;j++){
//				if(te[i]>te[j+1]){
//					temp=ts[i];ts[i]=ts[j+1];ts[j+1]=temp;
//				    temp=te[i];te[i]=te[j+1];te[j+1]=temp;
//				}
//			}
//		}
//        count=1;                  //����������ݵ����� 
//        k=te[0];
//        for(i=1;i<n;i++){         
//        	if(k<=ts[i]){
//        		k=te[i];
//        		count++;
//			}
//		}
//		printf("%d\n",count);
//    }
//    return 0;
//}	