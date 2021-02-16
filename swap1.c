#include <stdio.h>
int main()
{
	int a = 3, b = 5;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;

}
