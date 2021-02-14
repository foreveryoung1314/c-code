#include <stdio.h>
int main()
{
	const int n = 10;//const修饰的常变量，n的值固定了，n的本质属性还是变量，具有常属性
	printf("%d\n", n);
  //n = 8;
  //printf("%d\n", n);加上这段是错误的
	//int num = 10;
	//int arr[num]={0};括号头必须为常量表达式
	//int arr[n] = { 0 };依然是错误的
	return 0;
}
