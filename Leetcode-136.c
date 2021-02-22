#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,7,5 };
//	//找出单身狗
//	//此方法为暴力求解
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗；%d\n",arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//3^3=0
//a^a=0
//0^5=5
//0^a=a
//3^5^3=5,3^3^5=5 异或满足交换律
//011
//011
//000
//1^1^2^2^3^3^4^4^5=5
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("单身狗；%d\n", ret);
	return 0;
