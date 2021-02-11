#include <stdio.h>
int main()
{
	extern int g_val;
	printf("%d\n", g_val);

	return 0;
}

