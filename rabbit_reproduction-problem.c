int main()
{
	int nF1, nF2, nF3, num = 1;
	nF1 = 1;
	nF2 = nF3 = 0;
	while (num <= 12)
	{
		nF3 = nF2 + nF3;
		nF2 = nF1;
		nF1 = nF3;
		num++;
    }
	printf("nF1=%d nF2=%d nF3=%d\n", nF1, nF2, nF3);
	return 0;
}
