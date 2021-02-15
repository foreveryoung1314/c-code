int main()
{
	int nmale, nfemale, nchild;
	nmale = 0;
	while (nmale <= 9)
	{
		nfemale = 0;
		while (nfemale <= 12)
		{
			nchild = 0;
			while (nchild <= 36)
			{
				if ((nmale * 4 + nfemale * 3 + nchild / 2) == 36 && nmale + nfemale + nchild == 36&&nchild%2==0)
					printf("male=%d female=%d child=%d\n", nmale, nfemale, nchild);
				nchild++;
			}
			nfemale++;
		}
		nmale++;
	}
	return 0;
}
