include <stdio.h>
//EOF-end of file-文件结束标志- -1
int main()
{
	int a = 0;//4个字节，32bit位
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//sizeof单目操作符，不是函数
	//printf("%d\n",sizeof int);// err
	int b = ~a;//按位非-按二进制位取反，b是有符号的整型
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//原码、反码、补码 
	//负数在内存中存储的时候，存储的是二进制的补补码
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001

	printf("%d\n", b);									
	return 0;
}
