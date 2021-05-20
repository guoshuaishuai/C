#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//system
#include<string.h>
int main()
{
	//关机
	//system-专门用来执行系统命令
	char input[20] = { 0 };//数组存储数据
	system("shutdown -s -t 60");//执行关机命令
	again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s",input);
	if (strcmp(input, "我是猪") == 0) //input里是不是“我是猪”-strcmp -string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again; 
	}
	return 0;
}
//int main()
//{
//	//1 ^1  ^2  ^2  ^3  ^3  ^4  ^4  ^5 =5 异或
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//找出单数
//	//暴力求解
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("单数是：%d\n", ret);
//	return 0;
//}
//int main()
//{
//	//1 ^1  ^2  ^2  ^3  ^3  ^4  ^4  ^5 =5 异或
//	int arr[] = { 1, 2, 3, 4, 5,7, 1, 2, 3, 4 };//找出单数
//	//暴力求解
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for(i=0;i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单数是：%d\n", arr[i]);
//			
//		}	
//	}
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前a=%d b=%d\n", a, b);
//	//^按（二进制）位异或 相同为0，相异为1
//	//a=011
//	//b=101 
//	a = a^b;//110=6
//	b = a^b; //011=3
//	a = a^b;//101=5
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前a=%d b=%d\n", a, b);
//	//溢出的问题
//	//int -4个字节，32bit位-最大值
//	//INT_MAX; 2147483647
//	a = a + b;//a是和，还是原来的b  可能会溢出
//	b = a - b;//b得到原来的a
//	a = a - b;//a得到原来的b
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	//交换2个整型变量
//	int a = 3;
//	int b = 5;
//	int c = 0;//空瓶	
//	printf("交换前a=%d b=%d\n", a, b);
//	c = a;//1
//	a = b;//2
//	b = c;//3
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}