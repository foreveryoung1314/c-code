#include <stdio.h>
int main()
{
	int line = 0;
	printf("学习代码\n");
	while (line < 200000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if(line>=200000)
	printf("好工作\n");
	return 0;
}
