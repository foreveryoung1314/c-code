#include <stdio.h>
enum sex
{
	male,
    female,
	secret
};//枚举常量
int main()
{
	enum sex s = female;
	printf("%d\n", s);
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}
