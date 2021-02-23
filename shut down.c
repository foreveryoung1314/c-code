#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
int main()
{
	char input[20] = { 0 };//存储数据
	//关机
	//system() -专门用来执行系统命令
	system("shutdown -s -t 60");//关机
again:
	printf("请注意，你的电脑将在1分钟后关机，如果输入；我是猪，就取消关机\n");
	scanf("%s", input);//%s是字符串
	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是“我是猪” -strcmp -string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
