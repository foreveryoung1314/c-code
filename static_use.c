#include <stdio.h>
//static修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量
//改变了变量的作用域——让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法在使用
void test()
{
    int a = 1;//a是一个静态变量
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
  //static修饰函数，改变了函数的链接属性
//外部链接属性--内部链接属性
  extern int Add(int, int);
  int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum=%d\n", sum);

	return 0;
}
