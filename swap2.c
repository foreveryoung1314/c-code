#include <stdio.h>
#include <limits.h>
//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//	printf("交换前；a=%d b=%d\n",a,b);
//	//溢出的问题
//	//int - 4个字节 - 32bit位 - 最大值
//	a = a + b;
//	b = a - b;//b得到原来的a
//	a = a - b;
//	printf("交换后；a=%d b=%d\n",a,b);
//	//INT_MAX;  2147483647
//	return 0;
//}
int main()
{
	int a = 3;
	int b = 5;
	printf("交换前；a=%d b=%d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后；a=%d b=%d\n", a, b);
	//此方法没有溢出，且没有使用第三个变量，但可读性差，低于其他方法
	//进企业会采用第三个变量的方法，代码的可读性高，效率高
    return 0;
