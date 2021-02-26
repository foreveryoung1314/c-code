#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, m, x1, x2;
	scanf_s("%f%f%f", &a, &b, &c);
	m = b * b - 4 * a * c;
	if (m< 0)
		printf("no answer\n");
	else
	{
		x1 = ((-b)+ sqrt(m)) / (2 * a);
		x2 = ((-b)- sqrt(m)) / (2 * a);
		printf("x1=%f,x2=%f\n", x1, x2);
	}

	return 0;
}
